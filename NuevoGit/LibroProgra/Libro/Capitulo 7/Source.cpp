
/*
	calculator08buggy.cpp

	Helpful comments removed.

	We have inserted 3 bugs that the compiler will catch and 3 that it won't.
*/

#include "Includes.h"

struct Token { //Es la clase que va a evaluar los cracteres
public:
	char kind;
	double value;
	string name;
	Token(char ch) :kind(ch), value(0) { }
	Token(char ch, double val) :kind(ch), value(val) { }
	Token(string n,char ch):name(n),kind(ch){}


	
};

class Token_stream {//En este clase es para evaluar  si hay un token y pasar al siguiente token
	bool full;
	Token buffer;
public:
	Token_stream() :full(0), buffer(0) { }

	Token get();
	void unget(Token t) { buffer = t; full = true; }

	void ignore(char);
};
const char change = 'c';//Es para redefinir el valor de una variable
const char let = 'L';//No se que es
const char quit = 'E'; //Es el caracter para salir del programa
const char print = ';'; //Es el caracter del programa para escribir 
const char number = '8'; //Es para asignar un unmero
const char name = 'a'; //Es el caracter para definir un nuombre
const int K = 1000;




Token Token_stream::get()//Esta funcion 
{
	if (full) { full = false; return buffer; }//Es una funcion que identifica si hay un cracrter en el token stream y si es asi la manda a buffer
	char ch;
	cin >> ch;
	switch (ch) {
	case 'h':
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case ';':
	case '=':
	case 'r':
	case 'p':
	case change:
	case quit:
	case let:
		return Token(ch);
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	{	cin.unget();
	double val;
	cin >> val;
	return Token(number, val);//Es para identficar cuando el usuairo se quiere salir del programa 
	}
	default:
		if (isalpha(ch)) { //No tengo mucha idea para saber que es esto
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s = ch;
			cin.unget();
			if (s == "let") return Token(let);
			else if (s == "quit") return Token(quit);
			return Token(name);
			{
				error("Bad token");
			}

		}
		
	}
}

void Token_stream::ignore(char c) //Es para ignotar el enteer 
{
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

struct Variable {//Esto es para definir una variable dentro de el programa mientras se ejecuta
	string name;
	double value;
	Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> names;//Es donde se guarda una variable que se haga en el programa 

double get_value(string s)//Es para no se, no entiendo
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d) //Para elefir un nombre y un valor
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s)//
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;//Es para obtener un caracter y mandarlo a iostream

double expression(); //Es la expresion que manejamos en la jerarquia de numeros de uestro prgrama 

double primary()//Es un numerp en la jerarquia de los pasoso
{//Son diferentes pasos para ver wver que hace el programa para verificar si el token que obtienees una expresion
	Token t = ts.get();
	switch (t.kind) {
	case '(':
	{	double d = expression();
	t = ts.get();
	if (t.kind != ')') error("'(' expected");
	return d;
	}
	case 'r':
	{

		double d = expression();
		if (d<0)
		{
			error("Eso es una raiz negativa");
		
		}
	
		
			d = sqrt(d);
			return d;
	}

	case '-':
		return -primary();
	case number:
		return t.value;
	case name:
		return get_value(t.name);
	default:
		error("primary expected");
	}
}
double declaration()//Se supone que con esta funcion se deberian poder declarar variablesn 
{
	Token t = ts.get();
	if (t.kind != 'a') error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);

	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double term()//Es la parte del prgorma que dtermina si el token es un primario
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '*':
			left *= primary();
			break;
		case '/':
		{	double d = primary();
		if (d == 0) error("divide by zero");
		left /= d;
		break;
		}
		case'p':
		{
			double d = primary();
			int P = 0;
			for (int i = 0; i < d; i++)
			{
				left *=left;
			}
			P = left;
			left = P;

			return left;

		}
		case 'c':
		{
			return declaration();
		}

		
		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression()//Es la funcuin que determina si ya se completo una expresion
{
	double left = term();
	while (true) {
		Token t = 
			ts.get();
		switch (t.kind) {
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}


 
double statement()//No tengo 
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";//Estp es para ,ejorar la imterfaz del usuario
const string result = "= ";
//Estp ya es la funcion que junta toda la calculadora
void calculate()
{
	while (true) try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()//Ejecucion del programa con todas sus funciones

try {
	cout << "Bienvenido a la calculadora, si necesitas ayuda presiona H\n";
	cout << "Si quieres salir presiona E\n";
	char Ayuda;
	cin >> Ayuda;
	if (Ayuda == 'H')
	{
		cout << "Se supone que aqui hay algo que ayuda xd\n";
	}
	else if (Ayuda == '\n')
	{
		calculate();
	}
	return 0;
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}

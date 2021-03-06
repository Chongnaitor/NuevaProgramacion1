#include "includes.h"

//------------------------------------------------------------------------------

class Token{
public:
	char kind;        // what kind of token
	double value;     // for numbers: a value 
	Token(char ch)    // make a Token from a char
		:kind(ch), value(0) { }
	Token(char ch, double val)     // make a Token from a char and a double
		:kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
	Token_stream();   // make a Token_stream that reads from cin
	Token get();      // get a Token (get() is defined elsewhere)
	void putback(Token t);    // put a Token back
private:
	bool full;        // is there a Token in the buffer?
	Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
	:full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;       // copy t to buffer
	full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

 Token Token_stream::get()
{
	if (full) {       // do we already have a Token ready?
		// remove token from buffer
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

	switch (ch) {
	case '=':    // for "print"
	case 's':    // for "quit"
	case '{': case '}':case'(': case')': case '+': case '-': case'!': case '*': case '/':
		return Token(ch);        // let each character represent itself
	case '.':
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '9':
	{
		cin.putback(ch);         // put digit back into the input stream
		double val;
		cin >> val;              // read a floating-point number
		return Token('8', val);   // let '8' represent "a number"
	}
	default:
		error("Bad token");
	}
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------
double primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '{':    // handle '(' expression ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != '}') error("'}' expected");
		return d;
	}
	case '(':    // handle '(' expression ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case '8':            // we use '8' to represent a number
		return t.value;  // return the number's value
	default:
		error("primary expected");
	}
}

// deal with numbers and parentheses


//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{
	double left = primary();
	Token t = ts.get();        // get the next token from token stream

	while (true) {
		switch (t.kind) {
		case'!':
			if (left == 0)
			{
				left = 1;
				return left;
			}
		else
		{
			vector<int>Lul;
			for (int i = 1; i <= left; ++i)
			{
				Lul.push_back(i);

			}
			int UltimoValor = 1;
			for (int e = Lul[Lul.size() - 2]; e > -1; e--)
			{
				UltimoValor *= Lul[e];
			}
			left = UltimoValor;
			t = ts.get();
			break;
		}
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);     // put t back into the token stream
			return left;
		}
	}
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
	double left = term();      // read and evaluate a Term
	Token t = ts.get();        // get the next token from token stream

	while (true) {
		switch (t.kind) {
		case '-':
			left -= term();    // evaluate Term and add
			t = ts.get();
			break;
		case '+':
			left += term();    // evaluate Term and subtract
			t = ts.get();
			break;
		default:
			ts.putback(t);     // put t back into the token stream
			return left;       // finally: no more + or -: return the answer
		}
	}
}

//------------------------------------------------------------------------------

int Drill()
try
{
	double Val = 0;
	cout << "Bienvenido a la calculadora OP\n";
	cout << "Puedes usar +,-/,*. Para imprimir tu operacion, termina con =.\n"
		"Si quieres salir presiona s.\n"
		"Por favor ingresa una operacion integral:\n";
	while (cin) {
		Token t = ts.get();
		
		if (t.kind == 's') break; // 'q' for quit
		if (t.kind == '=')        // ';' for "print now"
			cout << "=" << Val << '\n';
		else
			ts.putback(t);
		Val = expression();
	}
	keep_window_open();
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}

//------------------------------------------------------------------------------
class Name_value {
public:
	
	string Name;
	int Age;
	Name_value(string Nombre, int Edad)
		:Name(Nombre),Age(Edad){}


};
//class Token {
//public:
	//char kind;        // what kind of token
	//double value;     // for numbers: a value 
	//Token(char ch)    // make a Token from a char
		//:kind(ch), value(0) { }
	//Token(char ch, double val)     // make a Token from a char and a double
		//:kind(ch), value(val) { }
//};


int Ejercicio4()
{
	vector<Name_value>Lista;
	Name_value Nombre1("Juan",26); 
	Lista.push_back(Nombre1);
	return 0;
}

int Ejercicio5()
{
	char Vacas;
	int Contador=0;
	int Score = 0;
	bool SiguienteNivel=false;
	cout << "Bienvenido al juego de los toros y las vacas\n"
		"Te dare diferentes palabras que tienes que advinar poniendo letra por letrao si quieres toda la palabra\n"
	"cada vez que aciertes el programa dira Toro y cuando te equivoques dira vaca:\n";
	vector <char> PalabraUno{ 'h','o','l','a' };
	while (SiguienteNivel ==false)
	{
		for (int i = 0; i < PalabraUno.size();)
		{
			cin >> Vacas;
			if (Vacas == PalabraUno[i])
			{
					
				cout << "Toro\n";
				i++;
				Contador++;
				Score++;
			}
			else if(Vacas!=PalabraUno[i])
			{
				cout << "Vaca\n";
			
				Score++;
			}
			else
			{

			}
			 if(Contador==PalabraUno.size())
			{
				cout << "La palabra es hola\n";
				cout << "Tardaste " << Score << " de veces para adivinar la palabra\n";

				SiguienteNivel = true;
			}
		}

	}
	cin.get();
	return 0;




}

int Ejercicio9()
{
	
	vector<char>Numeros;
	cout << "Escibre un nuemero de hasta 6 digitos y cuando acabes de escribir escribe | para parar:\n";
	for(char NumerosDeUsuario; cin>>NumerosDeUsuario;)
	{
	
		Numeros.push_back(NumerosDeUsuario);
		if (NumerosDeUsuario == '|')
		{ 
			break;
		}
		
	}

	if (Numeros.size() == 1)
	{
		cout << "Eso no se vale";

	}

	else if (Numeros.size() == 2)
		{
		cout << Numeros[0] << "Unidades\n";
	}
	else if (Numeros.size() == 3)
	{
		cout << Numeros[0] << "Decenas " << Numeros[1] << " Unidades";

	}
	else if (Numeros.size() == 4)
	{
		cout << Numeros[0] << " Centenas " << Numeros[1] << " Decenas " << Numeros[2] << " Unidades";

	}
	else if (Numeros.size() == 5)
	{
		cout << Numeros[0] << " Millares " << Numeros[1] << " Centenas " << Numeros[2] << " Decenas " << Numeros[3] << " Unidades";

	}
	else if (Numeros.size() == 6)
	{
		cout << Numeros[0] << " Decenas de millar " << Numeros[1] << "Millares " << Numeros[2] << " Centenas " << Numeros[3] << " Decenas " << Numeros[4] << " Unidades";

	}
	else if (Numeros.size() == 7)
	{
		cout << Numeros[0] << " Centenas de Millon " << Numeros[1] << " Decenas de millar " << Numeros[2] << " Millares " << Numeros[3] << " Centenas " << Numeros[4] << " Decenas " << Numeros[5] << " Unidades";

	}
	else
	{
		simple_error("Estas fuera de rango\n");
	}
	
	


			
	return 0;
	cin.ignore();
	cin.get();
}

int Factorial(int Numero)
{
	if (Numero ==0)
	{
		return 1;
	}
	vector<int>Lul;
	for (int i = 1; i <= Numero; ++i)
	{
		Lul.push_back(i);

	}
	int UltimoValor = 1;
	for (int e = Lul[Lul.size() - 2]; e > -1; e--)
	{
		UltimoValor *= Lul[e];
	}
	return UltimoValor;
}


int Permutacion(int a, int b)
{
	if (a < b)throw runtime_error("Tu numero a no puede ser menor a tu numero b\n");
	int Divisor = a - b;
	int Respuesta = Factorial(a) / Factorial(Divisor);
	return Respuesta;
}



int main()
{
	char InputDeUsuario;
	cout << "Este es un programa para hacer permutaciones y combinaciones. Escribe P para permutaciones o C para combinaciones:\n";
	cin >> InputDeUsuario;
	if (InputDeUsuario == 'P' || InputDeUsuario == 'p')
	{
		int a;
		int b;
		cout << "Escribe los dos numeros de los cuales quieras hacer tu permutacion:\n";
		cin >> a >> b;
		if (a < b)throw runtime_error("Tu numero a no puede ser menor a tu numero o numeros negativos b\n");
		
		int Divisor = a-b;
		int Respuesta = Factorial(a) / Factorial(Divisor);
		cout << Respuesta;
		
		
		
	}
	else if (InputDeUsuario == 'C' || InputDeUsuario == 'c')
	{
		int a;
		int b;
		cout << "Elige los dos numeros que quieras para hacer tu Combinacion:\n";
		cin >> a >> b;
		int Resultado = Permutacion(a, b) / Factorial(b);
		cout << Resultado;

	}
	cin.ignore();
	cin.get();
}
#include <iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

struct Date {
	int y;   //year          
	int m;      //month in year         
	int d;      //day of month}
	Date(int Dia, int Mes, int Ano)
		:d(Dia), m(Mes), y(Ano) {};
	Date() {};

	Date Today()
	{
		return Date(25, 8, 1978);
	}	
	Date Tomorrow()
	{
	
		Date Tomorrow = Today();
		Tomorrow.d++;
		return Tomorrow;
	}
};


class Name_Pairs {
public:

	std::string Name;
	int Age;
	Name_Pairs(std::string Nombre, int Edad)
		:Name(Nombre), Age(Edad) {}
};

struct PorNombre
{
	bool operator()(const Name_Pairs& PrimerNombre, const Name_Pairs& UltimoNombre) const
	{
		return PrimerNombre.Name > UltimoNombre.Name;
	}
};

int Ejercicio2()
{
	std::vector<Name_Pairs>NombreEdad;
	std::cout << "Escribe cuantos nombre quierese en tu lista: ";

	int NumeroDePersonas;
	std::cin >> NumeroDePersonas;
	for (int i = 0; i < NumeroDePersonas; i++)
	{
		std::cout << "Pon un nombre y su edad: ";
		std::string Nombre;
		int edad;
		cin >> Nombre >> edad;
		Name_Pairs NombreUsuario(Nombre, edad);
		NombreEdad.push_back(NombreUsuario);
	}
	std::priority_queue<Name_Pairs, std::vector<Name_Pairs>, PorNombre> OrdenarElementos;
	for (int i = 0; i < NombreEdad.size(); i++)
	{
		OrdenarElementos.push(NombreEdad[i]);
	}

	while (!OrdenarElementos.empty())
	{
		std::cout << OrdenarElementos.top().Name << " " << OrdenarElementos.top().Age << "\n";
		OrdenarElementos.pop();
	}

	std::cin.ignore();
	std::cin.get();
	return 4;
}


class Libro {
public:
	int ISBN;
	string Titulo;
	string Autor;
	string Editorial;
	bool Existe;
	Libro();
	Libro(string Titulo_c, string Autor_c, string Editorial_c,int ISBN_c,bool Existe_c)
		: ISBN(ISBN_c),Titulo(Titulo_c),Autor(Autor_c),Editorial(Editorial_c),Existe(true){}

};


void Print(Libro Lmao)
{
	cout <<"Titulo: "<<Lmao.Titulo<<"\n";
	cout <<"Autor: "<<Lmao.Autor << "\n";
	cout <<"Editorial: "<< Lmao.Editorial << "\n";
	cout <<"ISBM: "<< Lmao.ISBN << "\n";


}
void ComprobarLibro(Libro lmao)
{
	if (lmao.Existe == true)
	{
		cout << "Aqui tienes tu libro\n";
	}
	else if (lmao.Existe == false)
	{
		cout << "Se han llevado tu libro\n";
	}
}

void SacarLibro(vector<Libro>ListaDeLibros)
{
	int Eleccion;
	string mamada;
	bool Desicion = false;
	cout << "Quieres sacar un libro?: \n";

	cin >> mamada;
	if (mamada == "si" || mamada == "Si")
	{
		Desicion = false;
	}
	else
	{
		Desicion = true;
	}
	while (Desicion != true)
	{
		int j = 0;
		cout << "Di el numero del libro que quieres: ";
		cin >> Eleccion;
		for (int i = 0; i <= Eleccion - 1; i++)
		{
			j = i;
		}
		ComprobarLibro(ListaDeLibros[j]);
		ListaDeLibros[j].Existe = false;


		cout << "Quieres sacar un libro?: \n";


		cin >> mamada;
		if (mamada == "si" || mamada == "Si")
		{
			Desicion = false;
		}
		else
		{
			Desicion = true;
		}
	}

}
Libro CrearLibro()
{
	cout << "Quieres agrergar libro?: ";
	string Opcion;
	cin >> Opcion;
	if (Opcion == "si" || Opcion == "Si")
	{
		cout << "Necesitamos una etiqueta del libro(Solo una palabra); \n";
		string Eiqueta;
		cin >> Eiqueta;
		cin.ignore();
		cout << "Necesitamos el titulo del libro: \n";
		string Titulo;
		getline(cin, Titulo);
		cout << "Necesitamos el Autor: \n";
		string Autor;
		getline(cin, Autor);
		cout << "Necesitamos la editorial: \n";
		string Editorial;
		getline(cin, Editorial);
		cout << "Por ultimo necesitamos el numero de serie(Solo un monton de enteros sin espacios):\n";
		int NumSer;
		cin >> NumSer;
		Libro Etquieta(Titulo, Autor, Editorial, NumSer, true);
		cout << "Libro Creado!";
		return Etquieta;


	}
}
void Menu(vector<Libro>lmao)
{
	cout << "\n";
	for (int i = 0; i <= lmao.size()-1; i++)
	{
		cout << "Opcion " << i<<"\n";
		Print(lmao[i]);

	}
	cout << "\n";

}
int main()
{
	Libro SombrasDeGrey("50 Sombras de Grey", "Jennifer Aniston", "Tugfa", 7855545481118,true);
	Libro UrMomGay("Ur Mom Gay", "Lmao", "Libros Culeros", 8751515151,true);
	Libro Hasaki("Hasaki", "Soriegehton", "Trashuo", 98978987,true);
	vector<Libro>ListaDeLibros{SombrasDeGrey,UrMomGay,Hasaki};
	cout << "Hola bienvenido a la biblioteca\n";
	cout << "Cuando quieras salir solo escribe salir";
	bool Salida = false;
	while (Salida != true)
	{
		Menu(ListaDeLibros);
		SacarLibro(ListaDeLibros);
		ListaDeLibros.push_back(CrearLibro());
		Menu(ListaDeLibros);
		cout << "Quieres salir de  la libreria?";
		string Salir;
		cin >> Salir;
		if (Salir == "Si" || Salir == "si")
		{
			Salida = true;
		}
	}
	cout << "Saliendo...";

	cin.ignore();
	cin.get();


}


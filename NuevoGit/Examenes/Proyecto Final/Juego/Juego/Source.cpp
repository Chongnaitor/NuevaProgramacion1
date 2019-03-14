#include <iostream>
#include <vector>
#include <algorithm>
#include<fstream>
#include<string>
using namespace std;



struct Jugador {
	int Vida;
	vector<bool>Inventario;
	string NombreDelJugador;
	Jugador(string NombreDelJugador_m,int Vida_m,vector<bool>Inventario_m)
		:NombreDelJugador(NombreDelJugador_m),Vida(Vida_m),Inventario(Inventario_m){}
};


enum Objetos
{
Pistola_e = 0,
Linterna_e = 1,
Llave_e = 2

};


enum Niveles
{
	Nivel1 = 0,
	Nivel2 = 1,
	Nivel3 = 2,
	Nivel4=3,
};

Jugador FabricaDeJugadores()
{
	cout << "Escribe el nombre de tu personaje: ";
	string Nombre;
	getline(cin, Nombre);
	bool Pistola;
	bool Linterna;
	bool Llave;
	vector<bool>Items{ Pistola = false,Linterna = false,Llave = false };
	 Jugador JugadorUno(Nombre, 100, Items);
	 cout << "Bienvenido " << JugadorUno.NombreDelJugador;
	 return JugadorUno;

}

vector<int>Niveles()
{
	vector<int>Niveles{ Nivel1,Nivel2,Nivel3,Nivel4 };
	return Niveles;
}

ofstream Salvado()
{
	ofstream Nombre;
	Nombre.open("Niveles.txt");
	int*UrmomGay = new int (8);
	Nombre << *UrmomGay << endl;
	Nombre.close();
	return Nombre;

}

int main()
{
	FabricaDeJugadores();
	Salvado();
	cin.get();

 }
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
	Jugador(string NombreDeJugador_m)
		:NombreDelJugador(NombreDeJugador_m){}
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
	 cout << "Bienvenido " << JugadorUno.NombreDelJugador<<endl;
	 return JugadorUno;

}
Jugador FabricaDeJugadores(string NombreViejo, int Objetos)
{
	if (Objetos == 1)
	{
		bool Pistola;
		bool Linterna;
		bool Llave;
		vector<bool>Items{ Pistola = true,Linterna = false,Llave = false };
		Jugador Jugador1(NombreViejo, 100, Items);
		return Jugador1;
	}
	else if (Objetos == 2)
	{
		bool Pistola;
		bool Linterna;
		bool Llave;
		vector<bool>Items{ Pistola = true,Linterna = true,Llave = false };
		Jugador Jugador1(NombreViejo, 100, Items);
		return Jugador1;
	}

	else if (Objetos == 3)
	{
		bool Pistola;
		bool Linterna;
		bool Llave;
		vector<bool>Items{ Pistola = true,Linterna = true,Llave = false };
		Jugador Jugador1(NombreViejo, 100, Items);
		return Jugador1;
	}

}
vector<int>Niveles()
{
	vector<int>Niveles{Nivel1,Nivel2,Nivel3,Nivel4 };
	return Niveles;
}
ofstream* Salvado(int Nivel,Jugador Trash)
{
	ofstream* Nombre=new ofstream;
	Nombre->open("Niveles.txt");
	*Nombre << Nivel<<" "<<Trash.NombreDelJugador;
	Nombre->close();
	delete Nombre;
	return Nombre;

}
int AbrirJuegoNivel()
{
	ifstream JuegoViejo;
	int Nivel;
	string NombreDelJugador;
	JuegoViejo.open("Niveles.txt");
	if (!JuegoViejo)
	{
		return 0;
	}
	JuegoViejo >>Nivel >>NombreDelJugador;
	JuegoViejo.close();
	return Nivel;
}
string AbrirJuegoNombre()
{
	ifstream JuegoViejo;
	int Nivel;
	string NombreDelJugador;
	string NombreDelJugador1;
	string NombreDelJugador2;
	JuegoViejo.open("Niveles.txt");
	JuegoViejo >> Nivel>>NombreDelJugador>>NombreDelJugador1>>NombreDelJugador2;
	JuegoViejo.close();
	return NombreDelJugador+" "+NombreDelJugador1+" "+NombreDelJugador2;
}
enum Cuartos
{
	Pared = 0,
	Mesa = 1,
	Mueble = 2,
	Objeto=4,
	Vacio=5,
	Salida=6,
	Entrada=7,


};
void Moverse(int Pog[6][6], Jugador & Jugador,int NumeroDeObjeto,int InicioX,int InicioY)
{
	int x = InicioX;
	int y = InicioY;
	string Movimiento;
	while ( Pog[x][y] != Salida)
	{
		cin >> Movimiento;
		if (Movimiento == "Derecha" || Movimiento == "DERECHA" || Movimiento == "derecha")
			{
				y +=1;
				Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una pared" << endl;
				y=y-1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una mesa" << endl;
				y=y- 1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomarlo?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una pistola" << endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
			}
			else if (Pog[x][y] == Salida)
			{
				if (Jugador.Inventario[NumeroDeObjeto] == true)
				{
					if (Jugador.Inventario[NumeroDeObjeto] == true)
					{
						cout << "Llegaste a la salida" << endl;
					}
					else if(Jugador.Inventario[NumeroDeObjeto] == false)
					{
						cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
						y = y-1;
					}
				}
			}
			else if (Pog[x][y] == Vacio)
			{
				cout << "Te moviste a la derecha" << endl;
			}
			else if (Pog[x][y] == Entrada)
			{
				cout << "Regresaste a la entrada" << endl;
			}
			cout << Pog[x][y] << endl;
			cout << x<<y << endl;
			
		}
		else if(Movimiento=="Izquierda"||Movimiento=="izquierda"||Movimiento=="IZQUIERDA")
		{
			y -= 1;
			Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una pared" << endl;
				y=y+1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una mesa" << endl;
				y=y+1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomarlo?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una pistola" << endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
			}
			else if (Pog[x][y] == Salida)
			{
				if(Jugador.Inventario[NumeroDeObjeto]==true)
				{ 
					cout << "Llegaste a la salida" << endl;
				}
				else if(Jugador.Inventario[NumeroDeObjeto] == false)
				{
					cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
					y=y+1;
				}
			}
			else if (Pog[x][y] == Vacio)
			{
				cout << "Te moviste a izquierda" << endl;
			}
			else if (Pog[x][y] == Entrada)
			{
				cout << "Regresaste a la entrada" << endl;
			}
			cout << x << y << endl;
			cout << Pog << endl;
			
		}
		else if (Movimiento == "Atras" || Movimiento == "atras" || Movimiento == "ATRAS")
		{
			x -= 1;
			Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una pared" << endl;
				x=x + 1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una mesa" << endl;
				x=x + 1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomarlo?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una pistola" << endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
			}
			else if (Pog[x][y] == Salida)
			{
				if (Jugador.Inventario[NumeroDeObjeto] == true)
				{
					cout << "Llegaste a la salida" << endl;
				}
				else if(Jugador.Inventario[NumeroDeObjeto] == false)
				{
					cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
					x=x+1;
				}
			}
			else if (Pog[x][y] == Vacio)
			{
				cout << "Te moviste a atras" << endl;
			}
			else if(Pog[x][y]==Entrada)
			{
				cout << "Regresaste a la entrada" << endl;
			}
			cout << Pog[x][y] << endl;
			cout << x << y << endl;
		}
		else if (Movimiento == "adelante" || Movimiento == "Adelante" || Movimiento == "ADELANTE")
		{
			x += 1;
			Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una pared" << endl;
				x=x-1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una mesa" << endl;
				x=x-1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomaro?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una Pistola"<<endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
				else
				{
					cout << "No tomaste el objeto " << endl;
					Pog[x][y];
				}
			}
			else if (Pog[x][y] == Salida)
			{
				if (Jugador.Inventario[NumeroDeObjeto] == true)
				{
					cout << "Llegaste a la salida" << endl;
				}
				else if(Jugador.Inventario[NumeroDeObjeto] == false)
				{
					cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
					x = x - 1;
				}
			}
			else if (Pog[x][y] == Vacio)
			{
				cout << "Te moviste adelante" << endl;
			}
			
		}
		else
		{
			cout << "Movimiento invalido"<<endl;
		}
	
	}

}
void Level1(Jugador&Simon)
{
	int Nivel[6][6] = {	{Pared,Pared,Pared,Pared,Pared,Pared},
						{Pared,Entrada,Vacio,Vacio,Mesa,Pared},
						{Pared,Vacio,Mesa,Vacio,Vacio,Pared},
						{Pared,Vacio,Vacio,Vacio,Vacio,Pared},
						{Pared,Objeto,Vacio,Vacio,Vacio,Pared},
						{Pared,Pared,Salida,Pared,Pared,Pared } };
	Moverse(Nivel, Simon, Pistola_e, 1, 1);
	Salvado(1, Simon);
}
void Level2(Jugador&Simon);
void Level3(Jugador&Simon);
void Level4(Jugador&Simoon);
int main()
{
	cout << "Bienvenido al bosque de los lamentos" << endl;
	cout << "Tienes ya un juego?" << endl;
	string Juego;
	cin >> Juego;
	if (Juego == "si" || Juego == "SI" || Juego == "Si")
	{
		AbrirJuegoNivel();
		int Juego;
		Juego = AbrirJuegoNivel();
		if (Juego == 0)
		{
			cout << "Tu juego no existe, se te creare una nueva partida"<<endl;
			cin.ignore();
			Jugador Jugador1 = FabricaDeJugadores();
			Level1(Jugador1);
		}
		else if (Juego == 1)
		{
			cout << "Abriendo juego..."<<endl
				;
			string JugadorNombre = AbrirJuegoNombre();
			Jugador Jugador1=FabricaDeJugadores(JugadorNombre, Juego);
			cout << Jugador1.NombreDelJugador;
		}
	}
	else if (Juego == "No" || Juego == "NO" || Juego == "no")
	{
		
		cin.ignore();
		Jugador Jugador1 = FabricaDeJugadores();
		Level1(Jugador1);
	}
	cin.get();
 }
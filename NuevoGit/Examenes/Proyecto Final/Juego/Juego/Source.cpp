#include <iostream>
#include <vector>
#include <algorithm>
#include<fstream>
#include<string>
#include<windows.h>
#include<stdio.h>
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
void ImprimirNivel(int Pog[6][6])
{
	cout << "Para que te des una idea del mapa, se immprimira"<<endl;
	cout << "Presiona enter para continuar" << endl;
	cin.get();
	system("cls");
	cout << "	Pared = 0, Entrada = 7, Vacio para moverse = 5, Mesa = 1, Objeto para tomar = 4,  Salida = 6" << endl;
	for (int a = 0; a < 6; a++)
	{
		for (int b = 0; b < 6; b++)
		{
			cout << Pog[a][b] << " ";
		}
		cout << "\n";
	}

}
void ImprimirNivel(int Pog[10][10])
{
	cout << "Para que te des una idea del mapa, se imprimira" << endl;
	cout << "Presiona enter para continuar" << endl;
	cin.get();
	system("cls");
	cout << "	Pared = 0, Entrada = 7, Vacio para moverse = 5, Roca = 1, Objeto para tomar = 4,  Salida = 6, los otros numeros son sorpresa." << endl;
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			cout << Pog[a][b] << " ";
		}
		cout << "\n";
	}
}
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
void MemoramaJuego()
{
	cin.get();
	system("cls");
	cout << "Voy a decirte diferentes palabras y tienes que decirmerlas exactamente iguales" << endl;
	bool PasarDeNivel = false;
	while (PasarDeNivel != true)
	{
		vector<string>PalabrasNivel1{ "Verde","Manzana","Perro" };
		for (int i = 0; i < PalabrasNivel1.size(); i++)
		{
			Sleep(3000);
			cout << PalabrasNivel1[i] << endl;

		}
		Sleep(3000);
		system("cls");
		cout << "Ahora tienes que poner las palabras en el mismo orden y la misma escritura, incluye mayusculas" << endl;
		cout << "Tienes tres vidas" << endl;
		string Memorama;
		int Vidas = 3;
		for (int i = 0; i < PalabrasNivel1.size();)
		{
			cin >> Memorama;
			if (Memorama == PalabrasNivel1[i])
			{
				cout << "Es correcto" << endl;
				i++;
			}
			else if (Memorama != PalabrasNivel1[i])
			{
				cout << "Palabra incorrecta" << endl;
				Vidas--;
			}
			if (Vidas <= 0)
			{
				cout << "Perdiste" << endl;
				cout << "La calabera de Pedro te mato" << endl;
				Sleep(3000);
				system("cls");
				MemoramaJuego();
			}
			if (i == 3)
			{
				PasarDeNivel = true;
				cout << "Pasaste la primera ronda" << endl;

				Sleep(3000);
				system("cls");
			}
		}
	}
	bool PasarDeNivel2 = false;
	while (PasarDeNivel2 != true)
	{
		cout << "Segunda ronda" << endl;
		vector<string>PalabrasNivel1{ "Odio","Ira","Arcoiris" };
		for (int i = 0; i < PalabrasNivel1.size(); i++)
		{
			Sleep(3000);
			cout << PalabrasNivel1[i] << endl;

		}
		Sleep(3000);
		system("cls");
		cout << "Ahora tienes que poner las palabras en el mismo orden y la misma escritura, incluye mayusculas" << endl;
		cout << "Tienes tres vidas" << endl;
		string Memorama;
		int Vidas = 3;
		for (int i = 0; i < PalabrasNivel1.size();)
		{
			cin >> Memorama;
			if (Memorama == PalabrasNivel1[i])
			{
				cout << "Es correcto" << endl;
				i++;
			}
			else if (Memorama != PalabrasNivel1[i])
			{
				cout << "Palabra incorrecta" << endl;
				Vidas--;
			}
			if (Vidas <= 0)
			{
				cout << "Perdiste" << endl;
				cout << "La calabera de Pedro te mato" << endl;
				Sleep(3000);
				system("cls");
				MemoramaJuego();
			}
			if (i == 3)
			{
				PasarDeNivel2 = true;
				cout << "Pasaste la segunda ronda" << endl;
				Sleep(3000);
				system("cls");
			}

		}
	}
	bool PasarDeNivel3 = false;
	while (PasarDeNivel3 != true)
	{
		cout << "Tercera ronda" << endl;
		vector<string>PalabrasNivel1{ "Gato","Enojo","Chong" };
		for (int i = 0; i < PalabrasNivel1.size(); i++)
		{
			Sleep(3000);
			cout << PalabrasNivel1[i] << endl;

		}
		Sleep(3000);
		system("cls");
		cout << "Ahora tienes que poner las palabras en el mismo orden y la misma escritura, incluye mayusculas" << endl;
		cout << "Tienes tres vidas" << endl;
		string Memorama;
		int Vidas = 3;
		for (int i = 0; i < PalabrasNivel1.size();)
		{
			cin >> Memorama;
			if (Memorama == PalabrasNivel1[i])
			{
				cout << "Es correcto" << endl;
				i++;
			}
			else if (Memorama != PalabrasNivel1[i])
			{
				cout << "Palabra incorrecta" << endl;
				Vidas--;
			}
			if (Vidas <= 0)
			{
				cout << "Perdiste" << endl;
				cout << "La calabera de Pedro te mato" << endl;
				Sleep(3000);
				system("cls");
				MemoramaJuego();
			}
			if (i == 3)
			{
				PasarDeNivel3 = true;
				cout << "Pasaste la tercera ronda" << endl;
				Sleep(3000);
				system("cls");
			}

		}
	}

}
void Cuento()
{
	string Mascota;
	string Comida;
	string Herramienta;
	string Ciudad;
	vector<string>PalabrasDelCuento;
	cout << "Ingresa el nombre para una mascota: " << endl;
	cin >> Mascota;
	PalabrasDelCuento.push_back(Mascota);
	cout << "Ingresa una comida: " << endl;
	cin >> Comida;
	PalabrasDelCuento.push_back(Comida);
	cout << "Ingresa una herramienta: " << endl;
	cin >> Herramienta;
	PalabrasDelCuento.push_back(Herramienta);
	cout << "Ingresa una ciudad: " << endl;
	cin >> Ciudad;
	PalabrasDelCuento.push_back(Ciudad);
	cout << "La mascota que podia volar" << endl;
	cout << "Habia una vez un niño con una mascota llamada " << Mascota << "." << endl;
	cout << "Un dia el niño decidio que queria irse de viaje con " << Mascota << " a " << Ciudad << endl;
	cout << "Ya en el aereoupuerto con " << Mascota << " donde al subir al avion le recibieron con " << Comida << endl;
	cout << " que es su favorita." << endl;
	cout << "Las cosas se volvieron de miedo cuando empezó a haber una turbolencia muy fuerte." << endl;
	cout << "Fue que les dijeron que el avion podia estrellarse y que tenian que lanzarse en paracaidas" << endl;
	cout << "Como " << Mascota << " era un animal, viajaba en otra parte del avion" << endl;
	cout << "Entonces el niño tomó " << Herramienta << " y abrio la puerta, tomo a " << Mascota << " y se lanzo del avion" << endl;
	cout << "Asi es como el niño y " << Mascota << " terminaron en una isla deseierta de la cual fueron rescatados" << endl;
	cout << "y les pagaron mucho dinero por el accidente y terminaron en " << Ciudad << " y vivieron felices para siempre" << endl;
	cin.ignore();
	cin.get();





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
	Objeto = 4,
	Vacio = 5,
	Salida = 6,
	Entrada = 7,
	Evento1 = 8,
	Evento2 = 9,
	Evento3=10,

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
				else
				{
					cout << "No tomaste el objeto" << endl;
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
				else
				{
					cout << "No tomaste el objeto" << endl;
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
				else 
				{
					cout << "No tomaste el objeto" << endl;
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
				cout << "Quieres tomarlo?" << endl;
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
		else if (Movimiento == "<<")
		{
		ImprimirNivel(Pog);
		}
		else if (Movimiento == "Borrar"||Movimiento=="borrar"||Movimiento=="BORRAR")
		{
			system("cls");
		}
		else
		{
			cout << "Movimiento invalido" << endl;
		}
	
	}

}
void Level1(Jugador&Simon);
void Level1Minigame(Jugador&Jugador1)
{
	cin.ignore();
	system("cls");
	cout << "Bienvenido " << Jugador1.NombreDelJugador << " soy el duende Juanito. Se que estas buscado a alguien.\n"
		"Tu novia diria yo, no te preocupes, se hacia donde se la llevaron. Pero si quieres que te deje pasar y te diga a donde se la llevaron\n"
		"tendras que jugar conmigo. Veras, me aburro mucho por aquí entonces ese es mi trato\n Quieres jugar?" << endl;
	string decision;
	cin >> decision;
	int PalabraLargo=0;
	if (decision == "Si" || decision == "SI" || decision == "si")
	{

		"Te dare diferentes palabras que tienes que advinar poniendo letra por letra o si quieres toda la palabra\n"
			"cada vez que aciertes el programa dira caliente y cuando te equivoques dira frio y tienes solo 5 oportunidades por palabra:\n";
		char Palabra;
		int Contador = 0;
		int Vida = 3;
		bool SiguienteNivel = false;
		vector <char> PalabraUno{ 'o','d','i','o' };
		cout << "Pista: Es la sensacion que tienes a la personas que te quita tu novia" << endl;
		while (SiguienteNivel == false)
		{
			for (int i = 0; i < PalabraUno.size();)
			{
				cin >> Palabra;
				if (PalabraLargo > PalabraUno.size())
				{

					cout << "El largo de tu palabra es mayor al de la palabra orignal, el juego se reiniciara" << endl;
					Sleep(3000);
					Level1Minigame(Jugador1);
				}
				if (Vida <= 0)
				{
					cout << "Perdiste, el juego se reiniciara" << endl;
					Sleep(3000);
					Level1Minigame(Jugador1);
				}
				if (Palabra == PalabraUno[i])
				{
					cout << "Caliente\n";
					i++;
					Contador++;
				}
				else if (Palabra != PalabraUno[i])
				{
					cout << "Frio\n";
					Vida--;
					PalabraLargo++;
				}
				if (Contador == PalabraUno.size())
				{
					cout << "La palabra es Odio\n";
					SiguienteNivel = true;
				}
			}
		}
		//--------------------------------------------------------------------
		char Palabra2;
		int Contador2= 0;
		int Vida2=3;
		bool SiguienteNivel2 = false;
		int PalabraLargo2=0;
		vector <char> PalabraDos{ 'a','m','o','r' };
		cout << "Pista: Es la sensacion que le tienes a tu novia" << endl;
		while (SiguienteNivel2 == false)
		{
			for (int i = 0; i < PalabraDos.size();)
			{
				cin >> Palabra2;
				if (PalabraLargo2 > PalabraUno.size())
				{

					cout << "El largo de tu palabra es mayor al de la palabra orignal, el juego se reiniciara" << endl;
					Sleep(3000);
					Level1Minigame(Jugador1);
				}
				if (Vida2 <= 0)
				{
					cout << "Perdiste, el juego se reiniciara" << endl;
					Sleep(3000);
					Level1Minigame(Jugador1);
					

				}
				if (Palabra2 == PalabraDos[i])
				{
					cout << "Caliente\n";
					i++;
					Contador2++;
				}
				else if (Palabra2 != PalabraDos[i])
				{
					cout << "Frio\n";
					Vida2--;
					PalabraLargo2++;
				}
				if (Contador2 == PalabraDos.size())
				{
					cout << "La palabra es Amor\n";
					SiguienteNivel2 = true;
				}
			}
		}
		//-------------------------------------------------------------------------------------
		char Palabra3;
		int Contador3 = 0;
		int Vida3 = 3;
		bool SiguienteNivel3 = false;
		int PalabraLargo3 = 0;
		vector <char> PalabraTres{ 'B','o','c','a','n','e','g','r','a' };
		cout << "Pista: Es el apellido del creador del himno nacional mexicano, la primera letra en mayucula" << endl;
		while (SiguienteNivel3 == false)
		{
			for (int i = 0; i < PalabraTres.size();)
			{
				cin >> Palabra3;
				if (PalabraLargo3 > PalabraTres.size())
				{

					cout << "El largo de tu palabra es mayor al de la palabra orignal, el juego se reiniciara" << endl;
					Sleep(3000);
					Level1Minigame(Jugador1);
				}
				if (Vida3 <= 0)
				{
					cout << "Perdiste, el juego se reiniciara" << endl;
					Sleep(3000);
					Level1Minigame(Jugador1);
			

				}
				if (Palabra3 == PalabraTres[i])
				{
					cout << "Caliente\n";
					i++;
					Contador3++;
				}
				else if (Palabra3 != PalabraTres[i])
				{
					cout << "Frio\n";
					Vida3--;
					PalabraLargo3++;
				}
				if (Contador3 == PalabraTres.size())
				{
					cout << "La palabra es Bocanegra\n";
					SiguienteNivel3 = true;
				}
			}
		}

	}
	else if(decision == "no" || decision == "No" || decision == "NO")
	{
	cout << endl;
	cout << "El enano se emputo y te mato" << endl;
	cout << "Se va a reiniciar el juego" << endl;
	cout << "Presiona enter para continuar" << endl;
	cin.ignore();
	cin.get();
	Level1(Jugador1);
	}
	else
	{
	cout << "Opcion no valida" << endl;
	Level1Minigame(Jugador1);
	}
	cin.ignore();
	cout << "Presione ENTER para contiunuar" << endl;
		cin.get();
		system("cls");
}
void Level1(Jugador&Simon)
{
	system("cls");
	cout << "Hola " << Simon.NombreDelJugador << " estas en una aventura de texto donde pordras desplazarte por cuartos\n usando los comandos adelante, atras, derecha e izquierda.\n El juego se salva automaticamnete cada que pases un nivel solo tienes que cargarlo al principio."<<endl;
	cout << "Cuando te pregunten algo solo es si o no"<<endl;
	cout << "Cuando quieras ver el mapa escribe <<" << endl;
	cout << "Si quieres borrar lo que hay en la pantalla escribe Borrar";
	cout << endl;
	cout << "Era un fin de semana... tu y tu novia decidieron ir a un lugar cerca llamado modernamte por las personas ""El bosque oscuro""" << endl;
	cout << "pero no por malo, sino por que se incendio una vez y algunas partes del piso estan negras por la ceniza..." << endl;
	cout << "Despues de un rato de pasear a solas y estar tonteando tu novia te dice que ira al baño." << endl;
	cout << "Sentado en una piedra pensando como proponerle matrimonio, escuchas un grito desgarrador." << endl;
	cout << "Corres a su rescate, pero algo te golpea la cabeza. No sabes si te resbalaste o te golpearon pero " << endl;
	cout << "estas en el bosque bajo la lluvia en media noche y decides que tienes que encontrar a tu novia." << endl;
	cout << "La lluvia es tan fuerte que buscarla sera inutil asi que decides refugiarte en la primera cabaña que encuentras." << endl;
	cout << "Antes de entrar, ves escrito con sangre en la puerta ""Bienvenido al bosque de los lamentos"" y en el descanso de la puerta un zapato de tu novia"<<endl;
	cout << endl;
	cout << endl;
	int Nivel[6][6] = {	{Pared,Pared,Pared,Pared,Pared,Pared},
						{Pared,Entrada,Vacio,Vacio,Mesa,Pared},
						{Pared,Vacio,Mesa,Vacio,Vacio,Pared},
						{Pared,Vacio,Vacio,Vacio,Vacio,Pared},
						{Pared,Objeto,Vacio,Vacio,Vacio,Pared},
						{Pared,Pared,Salida,Pared,Pared,Pared } };
	ImprimirNivel(Nivel);
	cout << "Es hora de moverse:" << endl;
	Moverse(Nivel, Simon, Pistola_e, 1, 1);
	Level1Minigame(Simon);
	Salvado(1, Simon);
}
void Level2Eventos(Jugador&Simon,int NumeroDeEvento)
{
	if (NumeroDeEvento == 8)
	{
		cout << "Te has encontrado un cadaver. El cadaver parece mover la cabeza a tu direccion..." << endl;
		cout << "Hola, no es tu imaginacion, soy la calavera de Pedrito, alguien que hace tiempo como tu perdio a su novia" << endl;
		cout << "Como yo no la logre encontrar, creo que mereces el mismo destino que yo, es hora de que mueras..." << endl;
		cout << "Pero no se me haria divertido solo matarte entonces juguemos"<<endl;
		cout << "Presiona ENTER para continuar" << endl;
		cin.get();
		MemoramaJuego();
		system("cls");
		cout << "Demonios " << Simon.NombreDelJugador << " tu si que debes amar a esa tipa para ganarme" << endl;
		cout << "Nos volveremos a ver" << endl;
		cout << "Presiona ENTER para continuar"<<endl;
		cin.get();
	}
	else if (NumeroDeEvento == 9)
	{
		cout << Simon.NombreDelJugador << " parece encontrar algo pequeño y transparente... es una niña fantasma!!" << endl;
		cout << "Hola, soy Mandy y hace años que mori aqui... Extraño las historias que me contaba mi madre." << endl;
		cout << "Me cuentas una?: ";
		string Decision;
		cin >> Decision;
		if (Decision == "Si" || Decision == "si" || Decision == "SI")
		{
			cout << "Gracias!" << endl;
			Cuento();
			cout << "Esa fue una gran historia,gracias." << endl;
			cout << "Espero que encuentres a tu novia." << endl;
		}
		else if (Decision == "no" || Decision == "No" || Decision == "NO")
		{
			cout << "Espero que no encuentres a tu novia, y que mueras pedazo de basura" << endl;
			cout << "Presiona ENTER para continuar" << endl;
			cin.get();
		}
		else
		{
			cout << "Opcion no valida" << endl;
			system("cls");
			Level2Eventos(Simon, 9);
		}

	}
}
void Moverse(int Pog[10][10], Jugador & Jugador, int NumeroDeObjeto, int InicioX, int InicioY)
{
	int x = InicioX;
	int y = InicioY;
	string Movimiento;
	while (Pog[x][y] != Salida)
	{
		cin >> Movimiento;
		if (Movimiento == "Derecha" || Movimiento == "DERECHA" || Movimiento == "derecha")
		{
			y += 1;
			Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una roca" << endl;
				y = y - 1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una roca" << endl;
				y = y - 1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomarlo?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una linterna" << endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
				else
				{
					cout << "No tomaste el obejto" << endl;
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
					else if (Jugador.Inventario[NumeroDeObjeto] == false)
					{
						cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
						y = y - 1;
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
			else if (Pog[x][y] == Evento1)
			{
				Level2Eventos(Jugador, Evento1);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento2)
			{
				Level2Eventos(Jugador, Evento2);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento3)
			{
				Level2Eventos(Jugador, Evento3);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}

		}
		else if (Movimiento == "Izquierda" || Movimiento == "izquierda" || Movimiento == "IZQUIERDA")
		{
			y -= 1;
			Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una roca" << endl;
				y = y + 1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una roca" << endl;
				y = y + 1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomarlo?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una Linterna" << endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
				else
				{
					cout << "No tomaste el objeto" << endl;
				}
			}
			else if (Pog[x][y] == Salida)
			{
				if (Jugador.Inventario[NumeroDeObjeto] == true)
				{
					cout << "Llegaste a la salida" << endl;
				}
				else if (Jugador.Inventario[NumeroDeObjeto] == false)
				{
					cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
					y = y + 1;
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
			else if (Pog[x][y] == Vacio)
			{
				cout << "Te moviste a la derecha" << endl;
			}
			else if (Pog[x][y] == Entrada)
			{
				cout << "Regresaste a la entrada" << endl;
			}
			else if (Pog[x][y] == Evento1)
			{
				Level2Eventos(Jugador, Evento1);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento2)
			{
				Level2Eventos(Jugador, Evento2);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento3)
			{
				Level2Eventos(Jugador, Evento3);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}

		}
		else if (Movimiento == "Atras" || Movimiento == "atras" || Movimiento == "ATRAS")
		{
			x -= 1;
			Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una roca" << endl;
				x = x + 1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una mesa" << endl;
				x = x + 1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomarlo?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una Linterna" << endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
				else
				{
					cout << "No tomaste el objeto" << endl;
				}
			}
			else if (Pog[x][y] == Salida)
			{
				if (Jugador.Inventario[NumeroDeObjeto] == true)
				{
					cout << "Llegaste a la salida" << endl;
				}
				else if (Jugador.Inventario[NumeroDeObjeto] == false)
				{
					cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
					x = x + 1;
				}
			}
			else if (Pog[x][y] == Vacio)
			{
				cout << "Te moviste a atras" << endl;
			}
			else if (Pog[x][y] == Entrada)
			{
				cout << "Regresaste a la entrada" << endl;
			}
			else if (Pog[x][y] == Evento1)
			{
				Level2Eventos(Jugador, Evento1);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento2)
			{
				Level2Eventos(Jugador, Evento2);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento3)
			{
				Level2Eventos(Jugador, Evento3);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
		}
		else if (Movimiento == "adelante" || Movimiento == "Adelante" || Movimiento == "ADELANTE")
		{
			x += 1;
			Pog[x][y];
			if (Pog[x][y] == Pared)
			{
				cout << "Ahi hay una roca" << endl;
				x = x - 1;
			}
			else if (Pog[x][y] == Mesa)
			{
				cout << "Ahi hay una roca" << endl;
				x = x - 1;
			}
			else if (Pog[x][y] == Objeto)
			{
				cout << "Ahi hay un objeto" << endl;
				string decision;
				cout << "Quieres tomarlo?" << endl;
				cin >> decision;
				if (decision == "si" || decision == "SI" || decision == "Si")
				{
					cout << "Tienes una Linterna" << endl;
					Jugador.Inventario[NumeroDeObjeto] = true;
					Pog[x][y] = Vacio;
				}
				else
				{
					cout << "No tomaste el objeto " << endl;
				}
			}
			else if (Pog[x][y] == Salida)
			{
				if (Jugador.Inventario[NumeroDeObjeto] == true)
				{
					cout << "Llegaste a la salida" << endl;
				}
				else if (Jugador.Inventario[NumeroDeObjeto] == false)
				{
					cout << "Llegaste a la salida pero no puedes salir sin el objeto del nivel" << endl;
					x = x - 1;
				}
			}
			else if (Pog[x][y] == Vacio)
			{
				cout << "Te moviste adelante" << endl;
			}
			else if (Pog[x][y] == Entrada)
			{
				cout << "Regresaste a la entrada" << endl;
			}
			else if (Pog[x][y] == Evento1)
			{
				Level2Eventos(Jugador, Evento1);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento2)
			{
				Level2Eventos(Jugador, Evento2);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}
			else if (Pog[x][y] == Evento3)
			{
				Level2Eventos(Jugador, Evento3);
				Pog[x][y] = Vacio;
				ImprimirNivel(Pog);
			}

		}
		else if (Movimiento == "<<")
		{
		ImprimirNivel(Pog);
		}
		else if (Movimiento == "Borrar" || Movimiento == "borrar" || Movimiento == "BORRAR")
		{
		system("cls");
		}
		else
		{
			cout << "Movimiento invalido" << endl;
		}

	}

}
void Level2(Jugador&Simon);
void Level2Minigame(Jugador&Simon)
{
	cout << "Ves a tu novia en los brazos de... Un esqueleto!" << endl;
	cout << Simon.NombreDelJugador << " corre detras de su novia, pero otros esqueletos lo detienen" << endl;
	cout << "Es hora de usar tu arma para enfretarte a ellos!!!" << endl;
	cout << "Memoriza el numero que tienen los esqueletos en el cuerpo y ponlo"<<endl;
	int Calavera = 5;
	cout << "    III " << endl;
	cout << "   IOIOI " << endl;
	cout << "    IUI " << endl;
	cout << "     I  " << endl;
	cout << "    III " << endl;
	cout << "---II5II---" << endl;
	cout << "    III" << endl;
	cout << "   I   I" << endl;
	cout << "   I   I" << endl;
	cout << "  <I   I>" << endl;
	Sleep(3000);
	system("cls");
	int Disparo;
	cin >> Disparo;
	if (Disparo == Calavera)
	{
		cout << "Le diste! Ahi viene otro" << endl;
	}
	else
	{
		cout << "Fallaste, se llevaron a tu novia" << endl;
		Sleep(3000);
		Level1Minigame(Simon);
	}
	cout << "    III " << endl;
	cout << "   IOIOI " << endl;
	cout << "    IUI " << endl;
	cout << "     I  " << endl;
	cout << "    III " << endl;
	cout << "---II8II---" << endl;
	cout << "    III" << endl;
	cout << "   I   I" << endl;
	cout << "   I   I" << endl;
	cout << "  <I   I>" << endl;
	Sleep(3000);
	system("cls");
	Calavera = 8;
	Disparo = 0;
	cin >> Disparo;
	if (Disparo == Calavera)
	{
		cout << "Le diste! Buena puteria" << endl;
	}
	else
	{
		cout << "Fallaste, se llevaron a tu novia" << endl;
		Sleep(3000);
		Level1Minigame(Simon);
	}
	cout << "    III " << endl;
	cout << "   IOIOI " << endl;
	cout << "    IUI " << endl;
	cout << "     I  " << endl;
	cout << "    III " << endl;
	cout << "---II3II---" << endl;
	cout << "    III" << endl;
	cout << "   I   I" << endl;
	cout << "   I   I" << endl;
	cout << "  <I   I>" << endl;
	Sleep(3000);
	system("cls");
	Calavera = 3;
	Disparo = 0;
	cin >> Disparo;
	if (Disparo == Calavera)
	{
		cout << "Le diste! Buen disparo" << endl;
	}
	else
	{
		cout << "Fallaste, se llevaron a tu novia" << endl;
		Sleep(3000);
		Level1Minigame(Simon);
	}
	cout << "    III " << endl;
	cout << "   IXIXI " << endl;
	cout << "    IUI " << endl;
	cout << "     I  " << endl;
	cout << "    III " << endl;
	cout << "---IIIII---" << endl;
	cout << "    III" << endl;
	cout << "   I   I" << endl;
	cout << "   I   I" << endl;
	cout << "  <I   I>" << endl;

	cout << "Parece que derrotaste a todos pero aun asi alcanzaron a llevarse a tu novia" << endl;
	cout << "Presiona ENTER para continuar" << endl;
	cin.get();


}
void Level2(Jugador&Simon)
{
	cout << "Despues de derrotar al duende Juanito "<<Simon.NombreDelJugador<<" salio de la cabaña cuando de repente.."<<endl;
	cout << "cayo en una cueva muy oscura"<<endl;
	cout << "Presiona ENTER para continuar" << endl;
	cin.get();
	system("cls"); 
	int Nivel[10][10]{ {Pared,Pared,Pared,Pared,Pared,Pared,Pared,Pared,Pared,Pared},
					   {Pared,Pared,Pared,Pared,Entrada,Pared,Pared,Pared,Pared,Pared},
					   {Pared,Vacio,Vacio,Vacio,Vacio,Vacio,Mesa,Vacio,Vacio,Pared},
					   {Pared,Vacio,Evento1,Vacio,Vacio,Vacio,Vacio,Vacio,Mesa,Pared},
					   {Pared,Vacio,Vacio,Vacio,Vacio,Vacio,Vacio,Vacio,Vacio,Pared},
					   {Pared,Vacio,Vacio,Vacio,Evento2,Vacio,Vacio,Mesa,Vacio,Pared},
					   {Pared,Vacio,Mesa,Vacio,Vacio,Vacio,Vacio,Mesa,Vacio,Pared},
					   {Pared,Vacio,Vacio,Vacio,Mesa,Vacio,Vacio,Vacio,Vacio,Pared},
					   {Pared,Vacio,Vacio,Vacio,Vacio,Vacio,Vacio,Vacio,Objeto,Pared},
						{Pared,Pared,Pared,Pared,Salida,Pared,Pared,Pared,Pared,Pared } };

	ImprimirNivel(Nivel);
	cout << "Hora de moverse" << endl;
	Moverse(Nivel, Simon, 1, 1, 4);
	Salvado(1, Simon);
	cin.get();

}
void Level3(Jugador&Simon);
void Level4(Jugador&Simoon);
int main()
{
	cout << "Bienvenido al bosque de los lamentos" << endl;
	cout << "Tienes un juego salvado?" << endl;
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
			Level2(Jugador1);
		}
		else if (Juego == 1)
		{
			cout << "Abriendo juego..."<<endl;
			string JugadorNombre = AbrirJuegoNombre();
			Jugador Jugador1=FabricaDeJugadores(JugadorNombre, Juego);
			cout <<"Bienvenido "<<Jugador1.NombreDelJugador<<endl;
			cout << "Presiona enter para continuar"<<endl;
			cin.ignore();
			cin.get();
			system("cls");
			Level2(Jugador1);
			cin.ignore();
			cin.get();
		}
	}
	else if (Juego == "No" || Juego == "NO" || Juego == "no")
	{
		
		cin.ignore();
		Jugador Jugador1 = FabricaDeJugadores();
		Level1(Jugador1);
		Level2(Jugador1);
	}
	cin.get();
 }

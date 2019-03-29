#include <iostream>
#include <vector>
#include <algorithm>
#include<fstream>
#include<string>
#include<windows.h>
#include<stdio.h>
using namespace std;

void MemoramaJuego()
{
	cout << "Voy a decirte diferentes palabras y tienes que decirmerlas exactamente iguales" << endl;
	bool PasarDeNivel = false;
	while (PasarDeNivel != true)
	{
		vector<string>PalabrasNivel1{"Verde","Manzana","Perro"};
		for (int i = 0; i < PalabrasNivel1.size(); i++)
		{
			Sleep(3000);
			cout << PalabrasNivel1[i] << endl;
			
		}
		Sleep(3000);
		system("cls");
		cout << "Ahora tienes que poner las palabras en el mismo orden y la misma escritura, incluye mayusculas"<<endl;
		cout << "Tienes tres vidas" << endl;
		string Memorama;
		int Vidas=3;
		for (int i = 0; i < PalabrasNivel1.size();)
		{
			cin >>Memorama;
			if (Memorama == PalabrasNivel1[i])
			{
				cout << "Es correcto"<<endl;
				i++;
			}
			else if(Memorama!=PalabrasNivel1[i])
			{
				cout << "Palabra incorrecta"<<endl;
				Vidas--;
			}
			if (Vidas <= 0)
			{
				cout << "Perdiste" << endl;
				cout << "La calabera de Pedro te mato"<<endl;
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
			else if(Memorama!=PalabrasNivel1[i])
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
				cout << "Pasaste la segunda ronda" << endl;
				Sleep(3000);
				system("cls");
			}

		}
	}
	bool PasarDeNivel3 = false;
	while (PasarDeNivel3 != true)
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
				PasarDeNivel3= true;
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
	cout << "Habia una vez un niño con una mascota llamada " << Mascota << "."<<endl;
	cout << "Un dia el niño decidio que queria irse de viaje con " << Mascota << " a " << Ciudad<<endl;
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

void PeleaConEsqueletos()
{
	int Calavera = 5;
	cout <<"    III "<<endl;
	cout <<"   IOIOI " << endl;
	cout <<"    IUI " << endl;
	cout <<"     I  "<<endl;
	cout <<"    III " << endl;
	cout <<"---II5II---" << endl;
	cout <<"    III" << endl;
	cout <<"   I   I"<< endl;
	cout <<"   I   I"<< endl;
	cout <<"  <I   I>" << endl;
	Sleep(3000);
	system("cls");
	int Disparo;
	cin >> Disparo;
	if (Disparo == Calavera)
	{
		cout << "Le diste! Ahi viene otro"<<endl;
	}
	else
	{
		cout << "Fallaste, se llevaron a tu novia" << endl;
		Sleep(3000);
		PeleaConEsqueletos();
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
		PeleaConEsqueletos;
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
		PeleaConEsqueletos;
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


int main()
{
	PeleaConEsqueletos();
	cin.get();
	return 5;
}
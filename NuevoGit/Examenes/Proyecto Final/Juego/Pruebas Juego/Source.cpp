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
void ProblemasFisicos()
{
	system("cls");
	cout << "En esta estatua se puede leer Sir Johnson, fisico..."<<endl;
	cout << "Hola, soy Sir Johnson, antes de la dolorosa muerte que tuve en este bosque" << endl;
	cout << "era el fisico del este pueblo... Ahora bosque." << endl;
	cout << "Cuando la maldicion cayó, jure que evitaria que alguien más pasara de aquí, al menos que fuera por una causa noble" << endl;
	cout << "Ya veo, perdiste a tu novia por los esqueletos de la Bruja... Seguramente destrozara su alma " << endl;
	cout << "Para quedarse con su cuerpo. Te dejare pasar si me respondes todas mis preguntas" << endl;
	cout << "Cual es el valor de la fuerza de la gravedad?" << endl;
	string respuesta;
	string gravedad = "9.8";
	bool pregunta=false;
	while (pregunta == false)
	{
		cin >> respuesta;
		if (respuesta == gravedad)
		{
			cout << "Correcto" << endl;
			pregunta = true;
		}
		else if (respuesta != gravedad)
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasMatematicos();
		}

	}	
	pregunta = false;
	while (pregunta == false)
	{
		cout << "Di el apellido de la persona que invento la teoria de la relativad" << endl;
		string respuesta2;
		cin >> respuesta2;
		if (respuesta2 == "Einstein" || respuesta2 == "einstein")
		{
			cout << "Correcto" << endl;
			pregunta = true;

		}
		else if (respuesta2 != "Einstein" || respuesta2 != "einstein")
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasMatematicos();
		}
	}
	pregunta = false;
	while (pregunta == false)
	{
		cout << "Di el apellido de la persona que invento la pasteurizacion" << endl;
		string respuesta2;
		cin >> respuesta2;
		if (respuesta2 == "Pasteur" || respuesta2 == "pasteur")
		{
			cout << "Correcto" << endl;
			pregunta = true;

		}
		else if (respuesta2 != "Pasteur" || respuesta2 != "pasteur")
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasMatematicos();
		}
	}
	cout << "Lo lograste puedes pasar" << endl;
	cout << "Presiona ENTER para pasar" << endl;
	cin.get();

}
void ProblemasDeArte()
{
	system("cls");
	cout << "En esta estatua se puede leer Lady Micaila, Apasionada artista" << endl;
	cout << "Hola, soy Macaila, antes de la maldicion y de que el pueblo se quemara hasta los cimientos" << endl;
	cout << "era la artista del pueblo, mi trabajo era hermoso incluso estas estatuas son parte de mi trabajo." << endl;
	cout << "Antes de que la bruja acabara con todo pinte runas con sangre de la gente que esta en estas estatuas" << endl;
	cout << "de esa manera evitariamos que alguien reviviera a la bruja." << endl;
	cout << "Si quieres pasar por mi, tendras que contestar mis preguntas." << endl;
	cout << "Artista mexicna muy reconocida?" << endl;;
	string respuesta;
	string gravedad = "Frida Khalo";
	bool pregunta = false;
	while (pregunta == false)
	{
		getline(cin,respuesta);
		if (respuesta == gravedad)
		{
			cout << "Correcto" << endl;
			pregunta = true;
		}
		else if (respuesta != gravedad)
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasDeArte();
		}

	}
	pregunta = false;
	while (pregunta == false)
	{
		cout << "Di el apellido de la persona que pinto la Mona Lisa" << endl;
		string respuesta2;
		cin >> respuesta2;
		if (respuesta2 == "Davinci" || respuesta2 == "davinci")
		{
			cout << "Correcto" << endl;
			pregunta = true;

		}
		else if (respuesta2 != "Davinci" || respuesta2 != "davinci")
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasDeArte();
		}
	}
	pregunta = false;
	while (pregunta == false)
	{
		cout << "Como se llamaba el eo en realidad?" << endl;
		string respuesta2;
		cin.ignore();
		getline(cin, respuesta2);
		if (respuesta2 == "Freddy Mercury" || respuesta2 == "freddy mercury")
		{
			cout << "Correcto" << endl;
			pregunta = true;

		}
		else if (respuesta2 != "Freddy Mercury" || respuesta2 != "freddy mercury")
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasDeArte();
		}
	}
	cout << "Lo lograste puedes pasar" << endl;
	cout << "Presiona ENTER para pasar" << endl;
	cin.get();

}
void ProblemasMatematicos()
{
	system("cls");
	cout << "En esta estatua se puede leer, Nicholas Michaels Matematico."<<endl;
	cout << "Hola, soy Nicholas y antes de este desastre era profesor de matematicas del pueblo." << endl;
	cout << "Aunque mis ultimos momentos antes de ser estatua fueron en la carcel, por ayudar a la bruja." << endl;
	cout << "No sabia que era lo que hacia, entonces para redimirme me ofreci a ser la tercera estatua" << endl;
	cout << "Si quieres pasar tendras que resolver los problemas que te de" << endl;
	cout << "7*8-51" << endl;

	string respuesta;
	string gravedad = "5";
	bool pregunta = false;
	while (pregunta == false)
	{
		getline(cin, respuesta);
		if (respuesta == gravedad)
		{
			cout << "Correcto" << endl;
			pregunta = true;
		}
		else if (respuesta != gravedad)
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasDeArte();
		}

	}
	pregunta = false;
	while (pregunta == false)
	{
		cout << "Si tienes un Kilo de algodon y uno de clavos cual es mas pesado?" << endl;
		string respuesta2;
		cin >> respuesta2;
		if (respuesta2 == "Ninguno" || respuesta2 == "niguno")
		{
			cout << "Correcto" << endl;
			pregunta = true;

		}
		else if (respuesta2 != "ninguno" || respuesta2 != "Ninguno")
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasDeArte();
		}
	}
	pregunta = false;
	while (pregunta == false)
	{
		cout << "Cual es el numero divino?" << endl;
		string respuesta2;
		cin.ignore();
		getline(cin, respuesta2);
		if (respuesta2 == "7" || respuesta2 == "siete"||respuesta2=="Siete")
		{
			cout << "Correcto" << endl;
			pregunta = true;

		}
		else if (respuesta2 != "7" || respuesta2 != "siete" || respuesta2 != "Siete")
		{
			cout << "Esta mal" << endl;
			Sleep(2000);
			ProblemasDeArte();
		}
	}
	cout << "Lo lograste puedes pasar" << endl;
	cout << "Presiona ENTER para pasar" << endl;
	cin.get();

}
void Nombres()
{
	



}

int main()
{
	
	cin.get();
	return 5;
}
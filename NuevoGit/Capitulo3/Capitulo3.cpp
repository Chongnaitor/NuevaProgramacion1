#include "Includes.h"
using namespace std;
int Drill3()
{
	string Primer_Nombre;
	cout << "Pon el nombre de la persona a la  quieras dirigir esta carta: \n ";
	cin >> Primer_Nombre;
	cout << "Querido" << " " << Primer_Nombre<<":\n";
	cout << "Como estas? Espero que bien. Yo estoy bien aunque te extrano.\n"
		"Se que la ultima vez que nos vimos las cosas no pintaban nada bien\n"
		"pero se que seguiremos adelante no importa que nos pase, solo tienes\n"
		"que confiar en nosotros.\n";
	string Nombre_Amigo;
	cout << "Introduce el nombre de un amigo:\n";
	cin >> Nombre_Amigo;
	cout << "Has visto a" << " " << Nombre_Amigo << "?\n";
	cout << "Introduce el genero de tu amigo con una m si es hombre y una f si es mujer: \n";
	string Genero;
	cin >> Genero;
	if (Genero == "m")
	{
		cout << "Cuando lo veas dile que me llame!\n";
	}
	else if (Genero == "f")
	{
		cout << "Cuando la veas dile que me llame!\n";
	}
	else
	{
		cout << "Esa no es una opcion valida\n";
	}
	int age;
	
	cout << "Escribe cuantos anos tienes: \n";
	cin >> age;
	if (age <= 0 || age>=99)
	{
		simple_error("Seas mamon!\n");
	}
	else if (age <= 12)
	{
		cout << "El proximo a;o tendras" << " " << age + 1 << "\n";
	}
	else if (age == 17)
	{
		cout << "El proximo a;o te vas a poder poner un pedon!!!\n";
	}
	else if (age >= 70)
	{
		cout << "Disfruta el retiro anciano\n";

	}
	else
	{
		cout << "No puedo creer que ya tienes" << " " << age << " " << "a;os!";
	}
	cout << "Atentamente Chong ___________________________________________________________________\n";
	cin.ignore();
	cin.get();
	return 69;
}
#include "Includes.h"
using namespace std;
int Ejercicio1()
{
	cout << "Este es un programa para convertir millas a Kilometros\n"
		"Introduce cuantas millas quieres pasar a Kilometros; \n";
	double Miles;
	cin >> Miles;
	cout << Miles << " " << "millas son: \n" <<
		Miles * 1.60934 << " " << "Kilometros.\n";
	cin.ignore();
		cin.get();
		return 8;

	
}
#include "Includes.h"
using namespace std;
int Ejercicio2()
{
	int double=25;
	double char="Se";
	string int="JUA";
	bool double='a';
	return 20;
}
#include "Includes.h"
using namespace std;
int Ejercicio3()
{
	cout << "Escribe dos numeros enteros: \n";
	int Num1;
	int Num2;
	cin >> Num1 >> Num2;
	if (Num1>Num2)
	{
		cout << Num1 << " " << "es mayor que" << " " << Num2<<"\n";
	}
	else if (Num1 < Num2)
	{
		cout << Num2 << " " << "es mayor que" << " " << Num1<<"\n";
	}
	else if (Num1 == Num2 && Num2 == Num1)
	{
		cout << Num1 << " " << "y" << " " << Num2 << " " << "son iguales\n";
	}
	else
	{
		simple_error("Eso no es valido!!\n");
	}
	cin.ignore();
	int Radio;
	Radio = Num1 / Num2;

	cout << "La suma de " << " " << Num1 << " " << "y" << " " << Num2 << " " << "es igual a: " << Num1 + Num2 << "\n"
		<< "La resta de " << " " << Num1 << " " << " " << "y " << " " << Num2 << " " << "es igual a: " << Num1 - Num2 << "\n"
		<< "El radio de " << " " << Num1 << " " << "y" << " " << Num2 << " es igual a: " << "1:" << Radio << "\n"
		<< "La multiplicacion de " << Num1 << " " << "y" << " " << Num2 << " " << "es de: " << Num1 * Num2;

	
	cin.ignore();
	cin.get();
	return 69;
}
#include "Includes.h"
using namespace std;
int Ejercicio4()
{
	cout << "Escribe dos numeros enteros: \n";
	double Num1;
	double Num2;
	cin >> Num1 >> Num2;
	if (Num1 > Num2)
	{
		cout << Num1 << " " << "es mayor que" << " " << Num2 << "\n";
	}
	else if (Num1 < Num2)
	{
		cout << Num2 << " " << "es mayor que" << " " << Num1 << "\n";
	}
	else if (Num1 == Num2 && Num2 == Num1)
	{
		cout << Num1 << " " << "y" << " " << Num2 << " " << "son iguales\n";
	}
	else
	{
		simple_error("Eso no es valido!!\n");
	}
	cin.ignore();
	double Radio;
	Radio = Num1 / Num2;

	cout << "La suma de " << " " << Num1 << " " << "y" << " " << Num2 << " " << "es igual a: " << Num1 + Num2 << "\n"
		<< "La resta de " << " " << Num1 << " " << " " << "y " << " " << Num2 << " " << "es igual a: " << Num1 - Num2 << "\n"
		<< "El radio de " << " " << Num1 << " " << "y" << " " << Num2 << " es igual a: " << "1:" << Radio << "\n"
		<< "La multiplicacion de " << Num1 << " " << "y" << " " << Num2 << " " << "es de: " << Num1 * Num2;


	cin.ignore();
	cin.get();
	return 69;
}

#include "Includes.h"
using namespace std;
int Ejercicio5()
{
	cout << "Pon 3 numeros enteros: \n";
	int Num1;
	int Num2;
	int Num3;
	cin >> Num1 >> Num2 >> Num3;
	if (Num1 <= Num2 && Num1<=Num3 && Num2<=Num3)
	{
		cout << Num1 << "," << Num2 << "," << Num3;

	}
	else if (Num2 <= Num1 && Num2 <= Num3 && Num1 <= Num3)
	{
		cout << Num2 << "," << Num1 << "," << Num3;
	}
	else if (Num3 <= Num1 && Num3 <= Num2 && Num2 <= Num1)
	{
		cout << Num3 << "," << Num2 << "," << Num1;
	}

	else if (Num1 <= Num2 && Num1 <= Num3 && Num3 <= Num2)
	{
		cout << Num1 << "," << Num3 << "," << Num2;
	}
	else if (Num2 <= Num1 && Num2 <= Num3 && Num3 <= Num1)
	{
		cout << Num2 << "," << Num3 << "," << Num1;
	}
	else if (Num3 <= Num1 && Num3 <= Num2 && Num1 <= Num2)
	{
		cout << Num3 << "," << Num1 << "," << Num2;
	}

	cin.ignore();
	cin.get();
	return 2012;
} 

#include "Includes.h"
using namespace std;
int Ejercicio6()
{
	cout << "Pon 3 palabras: \n";
	string Num1;
	string Num2;
	string Num3;
	cin >> Num1 >> Num2 >> Num3;
	if (Num1 <= Num2 && Num1 <= Num3 && Num2 <= Num3)
	{
		cout << Num1 << "," << Num2 << "," << Num3;

	}
	else if (Num2 <= Num1 && Num2 <= Num3 && Num1 <= Num3)
	{
		cout << Num2 << "," << Num1 << "," << Num3;
	}
	else if (Num3 <= Num1 && Num3 <= Num2 && Num2 <= Num1)
	{
		cout << Num3 << "," << Num2 << "," << Num1;
	}

	else if (Num1 <= Num2 && Num1 <= Num3 && Num3 <= Num2)
	{
		cout << Num1 << "," << Num3 << "," << Num2;
	}
	else if (Num2 <= Num1 && Num2 <= Num3 && Num3 <= Num1)
	{
		cout << Num2 << "," << Num3 << "," << Num1;
	}
	else if (Num3 <= Num1 && Num3 <= Num2 && Num1 <= Num2)
	{
		cout << Num3 << "," << Num1 << "," << Num2;
	}

	cin.ignore();
	cin.get();
	return 23;
}

#include "Includes.h"
using namespace std;
int Ejercicio7()
{
	cout << "Pon un numero para ver si es par: ";
	int Numero;
	cin >> Numero;
	int Modulo;
	Modulo = Numero % 2;
		if (Modulo == 0)
		{
			cout << Numero << " " << "es un numero par\n";
		}
		else
		{
			cout << Numero << " " << "no es un numero par\n";
		}
		cin.ignore();
		cin.get();
		return 4;
}


#include "Includes.h"
using namespace std;
int Ejercicio8()
{
	string Palabra;
	cout << "Escribe con letras un numero del 0 al 4:\n";
	cin >> Palabra;
	if (Palabra=="Cero"||Palabra=="cero")
	{
		cout << 0;
	}
	else if (Palabra == "Uno" || Palabra == "uno")
	{
		cout << 1;

	}
	else if (Palabra == "Dos" || Palabra == "dos")
	{
		cout <<2;

	}
	else if (Palabra == "Tres" || Palabra == "tres")
	{
		cout << 3;
	}
	else if (Palabra == "Cuatro" || Palabra == "cuatro")
	{
		cout << 4;
	}
	else 
	{
		simple_error("Eso no es un numero que yo conozca\n");
	}
	cin.ignore();
	cin.get();
	return 5;
}
#include "Includes.h"
using namespace std;
int Ejercicio9()
{
	cout << "En este programa puedes elegir que operacion quieres que se hagan con dos numeros\n"
		<< "Ejemplo: Suma, resta, division, multiplicaion, +, -, /, *, %\n ";
	double Num1;
	double Num2;
	string operador;
	cout << "Es hora de que pongas dos numeros:\n";
	cin >> Num1 >> Num2;
	cout << "Es hora de que pongas que operador quieres:\n";
	cin >> operador;
	if (operador == "Suma" && "suma" && "+")
	{
		cout << Num1 + Num2;
		cin.ignore();
		cin.get();
	
	}
	else if (operador == "Resta" && "resta" && "-")
	{
		cout << Num1 - Num2;
		cin.ignore();
		cin.get();
	}
	else if (operador == "Division" && "division" && "/")
	{
		cout << Num1 / Num2;
		cin.ignore();
		cin.get();
	}
	else if (operador == "Multiplicacion" && "multiplicacion" && "*")
	{
		cout << Num1 * Num2;
		cin.ignore();
		cin.get();
	}
	else
	{
		simple_error("Eso no va a ser posible");


	}
	return 115;7
	cin.ignore();
	cin.get();

}
#include "Includes.h"
using namespace std;
int Ejercicio10()
{
	int pennies;
	cout << "Dime cuantos pennies tienes;\n";
	cin >> pennies;
	cout << "Tienes " << pennies/5  << " nickel(s)\n"
		<< "Tienes " << pennies/10 << " dime(s)\n"
		<< "Tienes " << pennies / 25 << " quarter(s)\n"
		<< "Tienes " << pennies / 50 << " half dollar(s)\n"
		<< "Tienes " << pennies / 100<< " dollar(s)\n";
	cin.ignore();
	cin.get();

}





#include <iostream>
#include <vector>
#include <array>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
	int Largo = 0;

	char* Palabra = new char[Largo] {};
	cout << "Escribe el largo de tu palabra: ";
	cin >> Largo;
	Largo = Largo;
	cout << "Ahora escribe tu palabra:\n";
	for (int i = 0; i < Largo; i++)
	{
		char a;
		cin >> a;
		Palabra[i]=a;
	}
	int Menos = Largo - 1;
	for (int i = 0;i<Largo;++i)
	{
		
		cout << Palabra[Menos];
		Menos--;

	}
	cin.ignore();
	cin.get();
	delete Palabra;
}



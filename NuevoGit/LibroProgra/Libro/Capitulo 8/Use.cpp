#include <iostream>

#include "Header.h"
int foo;
int Drill()
{

	foo = 7;
	print_foo();
	int i = 99;
	print(i);
	std::cin.get();
	return 0;
}


int swap(int a, int b)
{
	int temp; temp = a, a = b; b = temp;
	return b, a;
}
		



int swap_r(int&a, int&b)
{
	int temp; temp = a, a = b; b = temp;
	return a,b;
}

/*int swap_constant(const int&a, const int&b)
obviamente no va a compilar por que esta basado en constantes con referencias, o sea que no se puede cambiar
{
	int temp; temp = a, a = b; b = temp;

}
*/

int Drill2()
{
	int a = 7;
	int b = 6;
	swap(a, b);
	std::cout << b << a;
	std::cin.get();
	return 5;
}

namespace X
{
	int var;
	
	void print()
	{
		std::cout << var;
	}
}
namespace Y
{
	int var;
	void print()
	{
		std::cout << var;
	}

}
namespace Z
{
	int var;
	void print()
	{
		std::cout << var;
	}

}

int Drill3()
{
	X::var = 7;
	X::print();
	using namespace Y;
	var = 8;
	print();
	{
		using Z::var;
		
		var = 11;
		Z::print();

	}

	std::cin.get();
	print();        
	X::print();       
	return 0;
}

#include <vector>
#include <string>

void  Print(std::vector<int>VectorParaImprimir, std::string Etiqueta)
{
	for (int i = 0; i < VectorParaImprimir.size(); i++)
	{
		std::cout<<" "<<Etiqueta<< VectorParaImprimir[i];
	}

}

int Ejercicio2()
{
	std::vector<int>VectorDePrueba{1,2,3,4};

	Print(VectorDePrueba, "Simon");
	std::cin.get();
	return 5;

}

std::vector<int>fibonnaci(int NumeroDeRepeticiones,std::vector<int>VectorCulero)
{
	int NumeroDeveces = NumeroDeRepeticiones;
	int a=0;
	int b=1;
	int c=0;
	std::vector<int>VectorFibonnacci;
	if (NumeroDeveces > 1)
	{
		for (int i = 0; i < NumeroDeveces; i++)
		{
			c = a + b;
			a = b;
			b = c;
			
			VectorCulero.push_back(b);
		
			

		}

	}

	return VectorCulero;

}
int Ejercicio3()
{
	std::vector<int>VectorCacas;
	VectorCacas=fibonnaci(5, VectorCacas);

	Print(VectorCacas, "Lmao");
	

	std::cin.get();
	return 61;
}

/*
En este ejerccio como da un error por que es numero demasiado grande preferi dejarlo en comentario para que no causara molestias en el codigo
int Ejercicio4()
{

	std::vector<int>HastaQueTruene;
	HastaQueTruene = fibonnaci(60006666666636656844, HastaQueTruene);
	Print(HastaQueTruene,"Fibbonacci");
	std::cin.get();
	return 7;
}
*/
std::vector<int>VectorEnReversa(std::vector<int>ArgumentoVector)
{
	int Temporal;
	int a;
	int b;
	int M = 1;
	int Ma = 1;
	for (int i = 0; i < ArgumentoVector.size();i++)
	{
		a = ArgumentoVector[ArgumentoVector.size()-M];
		Temporal = a;
		b = ArgumentoVector[Ma];
		a = b;
		b = Temporal;
		ArgumentoVector.push_back(Temporal);
		M--;
		Ma++;


	}
	return ArgumentoVector;
}

int Ejercicio5() 
{
	/*int temp; temp = a, a = b; b = temp;
	return a, b;
	*/
	std::vector<int>MiVector;
	MiVector = fibonnaci(4, MiVector);
	VectorEnReversa(MiVector);
	return 6;

}
#include <algorithm>
#include<queue>

class Name_value {
public:

	std::string Name;
	int Age;
	Name_value(std::string Nombre, int Edad)
		:Name(Nombre), Age(Edad) {}
};

struct PorNombre
{
	bool operator()(const Name_value& PrimerNombre, const Name_value& UltimoNombre) const
	{
		return PrimerNombre.Name > UltimoNombre.Name;
	}
};

int Ejercicio7Y8()
{
	std::vector<Name_value>NombreEdad;
	std::cout << "Escribe cuantos nombre quierese en tu lista: ";

	int NumeroDePersonas;
	std::cin >> NumeroDePersonas;
	for (int i = 0; i < NumeroDePersonas; i++)
	{
		std::cout << "Pon un nombre y su edad: ";
		std::string Nombre;
		int edad;
		std::cin >> Nombre >> edad;
		Name_value NombreUsuario(Nombre, edad);
		NombreEdad.push_back(NombreUsuario);
	}
	std::priority_queue<Name_value, std::vector<Name_value>, PorNombre> OrdenarElementos;
	for (int i = 0; i < NombreEdad.size(); i++)
	{
		OrdenarElementos.push(NombreEdad[i]);
	}
	
	while(!OrdenarElementos.empty())
	{
		std::cout << OrdenarElementos.top().Name << " " << OrdenarElementos.top().Age<<"\n";
		OrdenarElementos.pop();
	}
	std::cin.ignore();
	std::cin.get();
	return 4;
 
	
}


int main()
{



}

   
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
		std::cout<<Etiqueta<<" "<< VectorParaImprimir[i];
	}

}

int Ejercicio2()
{
	std::vector<int>VectorDePrueba{1,2,3,4};

	Print(VectorDePrueba, "Simon");
	std::cin.get();
	return 5;

}

void fibonnaci(int NumeroDeRepeticiones)
{
	int NumeroDeveces = NumeroDeRepeticiones;
	int a=0;
	int b=1;
	int c=0;
	if (NumeroDeveces > 1)
	{
		for (int i = 0; i < NumeroDeveces; i++)
		{
			c = a + b;
			a = b;
			b = c;
			std::cout<<b<<" ";

		}
	}

}
int main()
{
	

	std::cin.get();
}


   
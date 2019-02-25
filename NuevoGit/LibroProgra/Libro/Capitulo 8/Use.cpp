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
}


int swap(int a, int b)
{
	int temp; temp = a, a = b; b = temp;
}
		



int swap_r(int&a, int&b)
{
	int temp; temp = a, a = b; b = temp;

}

/*int swap_constant(const int&a, const int&b)
obviamente no va a compilar por que esta basado en constantes con referencias, o sea que no se puede cambiar
{
	int temp; temp = a, a = b; b = temp;

}
*/

#include <iostream>
using namespace std;

struct Date {
	int y;   //year          
	int m;      //month in year         
	int d;      //day of month}
	Date(int Dia, int Mes, int Ano)
		:d(Dia), m(Mes), y(Ano) {};
	Date(const Date&Date);

	Date Today()
	{
		return Date(25, 8, 1978);
	}	
	Date Tomorrow()
	{
	

		return Date(25, 9, 1978);
		
	}
};
	

/*class Name_value {
public:

	std::string Name;
	int Age;
	Name_value(std::string Nombre, int Edad)
		:Name(Nombre), Age(Edad) {}
};
*/
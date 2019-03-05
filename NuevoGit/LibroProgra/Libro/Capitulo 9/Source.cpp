#include <iostream>
using namespace std;

struct Date {
	int y;   //year          
	int m;      //month in year         
	int d;      //day of month}
	Date(int Dia, int Mes, int Ano)
		:d(Dia), m(Mes), y(Ano) {};
	Date() {};

	Date Today()
	{
		return Date(25, 8, 1978);
	}	
	Date Tomorrow()
	{
	
		Date Tomorrow = Today();
		Tomorrow.d++;
		return Tomorrow;
	}
};

int main()
{
	Date MyDate;
	MyDate = MyDate.Tomorrow();
	cout << MyDate.d;
	cin.get();


}
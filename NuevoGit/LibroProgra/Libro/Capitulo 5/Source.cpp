#include <iostream>
#include <vector>
#include <string>
using namespace std;
void error(string s)

{
	throw runtime_error(s);
}
int Drill() 
{
	try 
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e) 
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}
	//????????????????????????????????????????????
	
}

int Drill2()
{
	try
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}


}
int Drill3()
{
	try
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}

}
int Drill4 ()
{
	try
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}

}

int Drill5()
{
	try
	{
		int res = 7;
		vector<int>v(10);
		v[5] = res;
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}

}
int Drill6()
{
	try
	{
		int res = 7;
		vector<int>v(10);
		v[5] = res;
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill7()
{
	try
	{
		vector<int>v(10);
		v[5] = 7;
		if (v[5] == 7)
		{
			cout << "Succes!\n";
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}

}




int Drill8()
{
	try
	{
		bool cond = true;
		if (cond = true)
		{
			cout << "Succes!\n";
		}
		else
		{
			cout << "Fail!\n";
		}


		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill9()
{
	try
	{
		bool c = false;
		if (c == false)
		{
			cout << "Succes!\n";
		}
		else
		{
			cout << "Fail!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill10()
{
	try
	{
		string s = "ape";
		string c = "fool";
		if (c > s)
		{
			cout << "Succes!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}

}

int Drill11()
{

	try
	{
		string s = "ape";

		if (s != "fool")
		{
			cout << "Succes!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill12()
{
	try
	{
		string s = "ape";
		if (s < "fool")
		{
			cout << "Succes!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill13()
{
	try
	{
		vector<char>v(5);
		for (int i = 0; i < v.size(); i++)
		{
			cout << "Succes!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}


int Drill14()
{
	try
	{
		vector<char>v(5);
		for (int i = 0; i < v.size(); i++)
		{
			cout << "Succes!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}
int Drill15()
{
	try
	{
		vector<char>v(5);
		string s = "Succes!\n";
		for (int i = 0; i < 6; i++)
		{
			cout<<s;
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill16()
{
	try
	{
		vector<char>v(5);
		if (true)
		{
			cout << "Succes!\n";
		}
		else
		{
			cout << "Fail\n";
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill17()
{
	try
	{
		int x = 2000;
		int c = x;
		if (c == 2000)
		{
			cout << "Succes!\n";
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}


int Drill18()
{
	try
	{
		string s = "Succes!\n";
		for (int i = 0; i < 10; ++i)
		{
			cout << s;
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill19()
{
	try
	{
		vector<int> v(5);
		for (int i = 0; i < v.size(); i++)
		{
			cout << "Succes!\n";
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill20()
{
	try
	{
		int i = 0;
		int j = 9;
		while (i < 10)++i;
		if (j < i)
		{
			cout << "Succes!\n";
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}
int Drill21()
{
	try
	{
		
		int x = 2;
		int y = 5;
		if (y == x * 2 + 1)
		{
			cout << "Succes!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill22()
{
	try
	{

		int x = 2;
		int y = 5;
		if (y == x * 2 + 1)
		{
			cout << "Succes!\n";
		}
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}

int Drill23()
{
	try
	{
		vector<string> s;
		s.push_back("Succes!\n");
		for (int i = 0; i < s.size(); i++)
		{
			cout << s[i];
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}
int Drill24()
{
	try
	{
		int i = 0;
		int j = 0;
		while (i < 10)++i;
		{
			if (j < i)
			{
				cout << "Succes!\n";
			}
		}


		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}
int Drill25()
{
	try
	{
		int x = 4;	
		double d = 5 /x - 2;
		if (d = 2 * x + 0.5)
		{
			cout << "Succes!\n";
		}

		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "Error: " << e.what() << '\n';
		cin.get();
		return 1;
	}
	catch (...)
	{
		cerr << "Error desconocido\n";
		cin.get();
		return 2;
	}
}


double Kelvin(double c)
{
	if (c < -273.15)error("Estas pasandote de la temperatura minima");
	int k = c + 273.15;
	return k;

}

double Celcius(double k)
{
	if (k < 0)error("Estas pasandote de la temperatura minima");
	int c = k - 273.15;
	return c;

}

double CelciusAFaranheit(double c)
{
	double a = c  * 9 / 5 + 32;
	return a;
}

double FarenheitACelcius(double c)
{
	double a = c - 32 * 5 / 9;
	return a;
}
int Ejercicio6()
{
	char Eleccion;
	cout << "Elige si quieres pasar a de Kelvin a celcius presionando K, o de celsius a Kelvin presionando C:\n";
	cin >> Eleccion;
	if (Eleccion == 'K' || Eleccion == 'k')
	{
		cout << "Pon el numero;\n";
		double c = 0;
		cin >> c;
		double k = Kelvin(c);
		cout << k;
		cin.ignore();
		cin.get();

	}
	else if (Eleccion == 'C' || Eleccion == 'c')
	{
		cout << "Pon el numero;\n";
		double c = 0;
		cin >> c;
		double k = Celcius(c);
		cout << k;
		cin.ignore();
		cin.get();
	}
	return 2;
}
int Ejercicio8()
{
	cout << "Escribe cuantos numeros quieres que se sumen:\n";
	int a = 0;
	cin >> a;
	cout << "Ingresa una serie de numeros y cuando termine presiona !:\n";
	vector<double> Numeros;
	for (double i = 0; cin >> i;)
		Numeros.push_back(i);
	
	
		for (int c = 0; c < Numeros.size(); c++)
		{
			int b = Numeros[c];
			a = 0;
			a = b;
			cout << a + b;
		}
		
	
	
		return 6;
}


int main()
{
	
	cout << "Ingresa hasta que numero de fibonacci quieres:\n";
		int a = 0;
		int b = 1;
		int c = 0;
		int d = 0;
		cin >> a;
		if (a > 1)
		{
			for (int i = 0; i < a; i++)
			{
				d = b + c;
				b = c;
				c = d;
				cout << d;
			}
		}
	}

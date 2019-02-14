#include "Includes.h"
using namespace std;
int drill()
{

	
	
	
	
	
	
		


		vector<double>Comparador;	
		string unidades;
		cout << "Ahora elige unidades en que unidades lo quieres: \n";
		cin >> unidades;
		cout << " Ahora lista los numeros que quieras y despues pon | para continuar: \n ";
		double num1;
		for (double Elemento; cin >>num1;)
			Comparador.push_back(num1);
		double num2;
		num2 = Comparador.back();
		sort(Comparador);
		if (Comparador.front() >= num2)
		{
			cout << num2 << " es el menor hasta ahora\n";
			
		}
		else if(Comparador.back() <= num2)
		{
			cout << num2 << " es el mayor hasta ahora\n";
			
		}
		else
		{
			cout << Comparador.front() << " es el mas pequeno y " << Comparador.back() << " es el mas grande\n";
		}
		
	
		double iterador;
		cin.ignore();
		cin.get();
		
		
		
		if (unidades == "m")
		{
			for (int  i=0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " m ";
			}
		}
		else if (unidades == "ft")
		{
			for (int i = 0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " ft ";
			}
		}
		else if (unidades == "in")
		{
			for (int i = 0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " in ";
			}
		}
		else if (unidades == "cm")
		{
			for (int i = 0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " cm ";
			}
		}
		cin.ignore();
		cin.get();
		return 2;
}
int ejercicio2()
{
	vector<double> temps;             
	for (double temp; cin>>temp; )                      
		temps.push_back(temp);      
		        
	double sum = 0;          
	for (double x : temps) sum += x;         
	cout << "Average temperature: " << sum/temps.size() << '\n';                     
	sort(temps);                 
	size_t size = temps.size();

	if (size == 0)
	{
		return 0;  
	}
	else
	{
		sort(temps.begin(), temps.end());
		if (size % 2 == 0)
		{
			cout<<(temps[size / 2 - 1] + temps[size / 2]) / 2;
		}
		else
		{
			cout << (temps[size / 2]);
		}

	}
}
int ejercicio3()
{
	double suma=0;
	vector<double>Ciudades{150,89,70,53,98};
	for (double i : Ciudades) suma += i;
	{
		cout << "Esta es la suma total de todas las distancias entre ciudades " << suma<<"km\n";

	}
	sort(Ciudades);
	int elemento = Ciudades[1];
	int elemento2 = Ciudades[3];
	

	if (Ciudades.front() <= elemento);
	{
		cout <<"La distancia mas pequena entre ciudades es :"<< Ciudades.front() + elemento<<"\n";
	}
	if (Ciudades.back() >= elemento2)
	{
		cout << "La distancia mas grande entre ciudades es: " << Ciudades.back() + elemento2 << "\n";
	}
	cin.ignore();
		cin.get();
		return 485;

}
int ejercicio4()
{
	vector<int>Numeros;
	vector<int>Numeros2;
	vector<int>Numeros3;
	vector<int>Numeros4;
	int b = 101;
	for (int i = 0; i != b;)
	{
		Numeros.push_back(i);
		i++;
	}
	cout << "Bienvenido al juego en el que la maquina te adivinara el numero en el que estas pensando del 1 al cien\n";
	cout << "Tu numero es mayor a 50?:\n";
	string NumeroDeUsuario0;
	cin >> NumeroDeUsuario0;
	if (NumeroDeUsuario0 == "Si" || NumeroDeUsuario0 == "si")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] >= 50)
			{
				Numeros2.push_back(s);
			}
		}
	}
	if (NumeroDeUsuario0 == "Si" || NumeroDeUsuario0 == "si")
	{
		string Mayor75;
		cout << "Tu numero es mayor a 75?\n";
		cin >> Mayor75;
		if (Mayor75 == "Si" || Mayor75 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 75)
				{
					Numeros3.push_back(Numeros2[y]);
				}
			}
		}

		if (Mayor75 == "No" || Mayor75 == "no")
		{
			for (int i = 0; i < Numeros2.size(); i++)
			{
				if (Numeros2[i] <= 75)
				{
					Numeros3.push_back(Numeros2[i]);
				}
			}
		}

	}


	if (NumeroDeUsuario0 == "No" || NumeroDeUsuario0 == "no")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] <= 50)
			{
				Numeros2.push_back(s);
			}
		}


	}
	if (NumeroDeUsuario0 == "No" || NumeroDeUsuario0 == "no")
	{
		string Mayor25;
		cout << "Tu numero es mayor a 25?\n";
		cin >> Mayor25;
		if (Mayor25 == "Si" || Mayor25 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
		else if (Mayor25 == "no" || Mayor25 == "No")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] <= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
	}


	string MultiplosLocos;
	if (Numeros3.back() == 25)
	{
		cout << "Tu numero es multiplo de 5?\n";
		cin >> MultiplosLocos;
		if (MultiplosLocos == "Si" || MultiplosLocos == "si")
		{
			cout << "Tu numero es mayor 15?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "Si" || MultiplosLocos == "si")
			{
				cout << "Tu numero es 20?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Wiiiiiiiii\n";
				}
				else
				{
					cout << "Tu numero es 25";
				}

			}
			else if (MultiplosLocos == "No" || MultiplosLocos == "no")
			{
				cout << "Tu numero es 15?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Wiiii!!\n";
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")
				{
					cout << "Tu numero es 10?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Wiiiiiiiii\n";
					}
					else
					{
						cout << "Tu numero es 5";
					}
				}
			}
		}
		else if (MultiplosLocos == "No" || MultiplosLocos == "no")
		{
			cout << "Tu numero esta entre el 1 y el 13\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "No" || MultiplosLocos == "no")
			{
				cout << "Tu numero esta entre 14 y 24\n";
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Tu numero es 18?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";
					}
					else if ((MultiplosLocos == "no" || MultiplosLocos == "No"))
					{
						cout << "Tu numero es 24?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Tu numero es 21\n";
						}
					}
				}

				else if (MultiplosLocos == "No" || MultiplosLocos == "no")
				{
					cout << "Tu numero esta entre el 14 y 24\n";
					cout << "Tu numero es mayor a 17?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Tu numero es 19?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 23?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 24";
							}
							else if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}

						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 17?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 16?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 14\n";
							}
						}
					}
				}
			}
			if (MultiplosLocos == "Si" || MultiplosLocos == "si")
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es mayor a 4?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Tu numero es 7?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 11?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "Si" || MultiplosLocos == "si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 13";
							}

						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 4?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 2?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "Si" || MultiplosLocos == "si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 1";
							}
						}
					}
				}
				else if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 9?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 12\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 9?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 6?";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{

									cout << "Yay";
								}
								else if (MultiplosLocos == "no" || MultiplosLocos == "No")
								{
									cout << "Tu numero es 3";
								}
							}
						}
					}


				}

			}

		}
	}
	else if (Numeros3.back() == 50)
	{
		cout << "Tu numero es multiplo de 5?\n";
		cin >> MultiplosLocos;
		if (MultiplosLocos == "si" || MultiplosLocos == "Si")
		{
			cout << "Tu numero es mayor a 40?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es 45?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay\n";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 50\n";
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")
			{
				cout << "Tu numero es 40?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 35?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 30";
					}
				}

			}
		}
		else if (MultiplosLocos == "no" || MultiplosLocos == "No")
		{
			cout << "Tu numero esta entre el 26 y 37?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es mayor a 29?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es un multiplo de 3?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 36\n";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 32?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 34?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 37";
							}
						}
					}

				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//esto es por si el numero es menor a 29
				{
					cout << "Tu numero es multiplo de 3?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 21?";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 18";
						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 29?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 28?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 26";
							}
						}
					}
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Acuerdate que este else if es para el 38 hasta 49
			{
				cout << "Tu numero es multiplo de 3?";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 45?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 48";
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 42?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 39";
						}
					}
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 44?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 46?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 47?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 49";
							}
						}

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Menor a 44
					{
						cout << "Tu numero es 44?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 43?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 41?\n";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{
									cout << "Yay\n";
								}
								else if (MultiplosLocos == "No" || MultiplosLocos == "no")
								{
									cout << "Tu numero es 38";
								}
							}
						}
					}
				}
			}
		}
	}
	else if (Numeros3.back() == 75)
	{
		cout << "Tu numero es multiplo de 5?\n";//Multiplos de 5
		cin >> MultiplosLocos;
		if (MultiplosLocos == "si" || MultiplosLocos == "Si")
		{
			cout << "Tu numero es mayor a 65?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es 70?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay\n";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 75\n";
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")
			{
				cout << "Tu numero es 40?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 60?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 55";
					}
				}

			}
		}
		else if (MultiplosLocos == "no" || MultiplosLocos == "No")//52 62
		{
			cout << "Tu numero esta entre el 52 y 62?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es 51?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 54?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 51";
						}
					}

				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Por si no es multiplo de 3 pero su esta ewntre e; 52 y 62
				{
					cout << "Tu numero es mayor a 58?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 59?";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 61?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 62";
							}
						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 58?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 56?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 53?\n";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{
									cout << "Yay";
								}
								else if (MultiplosLocos == "No" || MultiplosLocos == "no")
								{
									cout << "Tu numero es 52";
								}
							}
						}
					}
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Acuerdate que este else if es para el 64 hasta 74 
			{
				cout << "Tu numero es multiplo de 3?";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 69?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 72";
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 69?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 66?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 63";
							}
						}
					}
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 68?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 71?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 73?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 74";
							}
						}

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Menor a 44
					{
						cout << "Tu numero es 68?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 64";
						}
					}
				}
			}
		}
	}
	else if (Numeros3.back() == 100)
	{
		cout << "Tu numero es multiplo de 5?\n";//Multiplos de 5
		cin >> MultiplosLocos;
		if (MultiplosLocos == "si" || MultiplosLocos == "Si")
		{
			cout << "Tu numero es mayor a 90?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es 95?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay\n";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 100\n";
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")
			{
				cout << "Tu numero es 90?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 85?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 80";
					}
				}

			}
		}
		else if (MultiplosLocos == "no" || MultiplosLocos == "No")//76 86 
		{
			cout << "Tu numero esta entre el 76 y 86?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 84?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 87";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 84?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 81?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 78";
							}
						}
					}

				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Por si no es multiplo de 3 pero su esta ewntre e; 76 y 86
				{
					cout << "Tu numero es mayor a 79?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						{
							cout << "Tu numero es 82?";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 83?\n";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{
									cout << "Yay";
								}
								else if (MultiplosLocos == "No" || MultiplosLocos == "no")
								{
									cout << "Tu numero es 86";
								}
							}
						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 79?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 77?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 76\n";
							}
						}
					}
				
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Acuerdate que este else if es para el 88 hasta 98
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es 93?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay";
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 96?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 99";
						}
					}
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 92?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 94?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 97?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 98";
							}
						}

					}



				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Menor a 44
				{
					cout << "Tu numero es 92?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 91?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es el 89?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay\n";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es el 88";
							}
						}
					}
				}
			}
		}
	}
	cin.get();
	cin.ignore();
	return 966;
}

int ejercicio5()
{
	double Numero1;
	double Numero2;
	char Operacion;
	cout << "Bienvenido a la calculadora\n";
	cout << "Pon dos numeros y la operacion que quieras:\n";
	cin >> Numero2 >> Numero1>>Operacion;

	if (Operacion == '+')
	{
		cout << Numero1 + Numero2;
	}
	else if (Operacion == '-')
	{
		cout << Numero1 - Numero2;
	}
	else if (Operacion == '/')
	{
		cout << Numero1 / Numero2;
	}
	else if (Operacion == '*')
	{
		cout << Numero1 * Numero2;
	}
	else
	{
		simple_error("Eso no va ahi");
	}
	cin.ignore();
	cin.get();
	return 14545;
}

int Ejercicio6()
{
	vector<string>Numeros{ "Cero","Uno","Dos","Tres","Cuatro","Cinco","Seis","Siete","Ocho","Nueve","Diez" };
	int NumeroDeUsuario;
	cout << "Escribe un numero en digito del uno al diez\n";
	cin >> NumeroDeUsuario;
	cout << Numeros[NumeroDeUsuario];
	cin.ignore();
	cin.get();
	return 5569;


}
int Ejercicio7()
{
	cout << "Elige si quieres escribir un numero de uno al nueve en letras o en digito\n";
	cout << "escribe Digito o Numero:\n";
	string Eleccion;
	cin >> Eleccion;
	if (Eleccion == "Digito" || Eleccion == "digito")
	{
		double Numero1;
		double Numero2;
		char Operacion;
		cout << "Bienvenido a la calculadora\n";
		cout << "Pon dos numeros y la operacion que quieras:\n";
		cin >> Numero2 >> Numero1 >> Operacion;

		if (Operacion == '+')
		{
			cout << Numero1 + Numero2;
		}
		else if (Operacion == '-')
		{
			cout << Numero1 - Numero2;
		}
		else if (Operacion == '/')
		{
			cout << Numero1 / Numero2;
		}
		else if (Operacion == '*')
		{
			cout << Numero1 * Numero2;
		}
		else
		{
			simple_error("Eso no va ahi");
		}
		cin.ignore();
		cin.get();
	}
	else if (Eleccion == "Numero" || Eleccion == "numero")
	{
		cout << "Bienvendido a la calculadora de letras\n";
		cout << "Escribe los numeros que quieres del 1 al 10\n";
		string Numero1;
		string Numero2;
		int Numero3=0;
		int Numero4=0;
		cin >> Numero1 >> Numero2;
		if (Numero1 == "uno" || Numero1 == "Uno")
		{
			 Numero3 +=1;
		}
		else if (Numero1 == "dos" || Numero1 == "Dos")
		{
			 Numero3 +=2;
		}
		else if (Numero1 == "Tres" || Numero1 == "tres")
		{
			 Numero3 +=3;
		}
		else if (Numero1 == "cuatro" || Numero1 == "Cuatro")
		{
			 Numero3 +=4;
		}
		else if (Numero1 == "cinco" || Numero1 == "Cinco")
		{
			Numero3 +=5;
		}
		else if (Numero1 == "seis" || Numero1 == "Seis")
		{
			 Numero3 += 6;
		}
		else if (Numero1 == "siete" || Numero1 == "Siete")
		{
			 Numero3 += 7;
		}
		else if (Numero1 == "ocho" || Numero1 == "Ocho")
		{
			Numero3+= 8;
		}
		else if (Numero1 == "Nueve" || Numero1 == "nueve")
		{
			int Numero3 = 9;
		}
		else if (Numero1 == "Diez" || Numero1 == "diez")
		{
			 Numero3 += 10;
		}
		
		
		if (Numero2 == "uno" || Numero2 == "Uno")
		{
			Numero4 +=1;
		}
		else if (Numero2 == "dos" || Numero2 == "Dos")
		{
			 Numero4 += 2;
		}
		else if (Numero2 == "Tres" || Numero2 == "tres")
		{
			 Numero4 +=3;
		}
		else if (Numero2 == "cuatro" || Numero2 == "Cuatro")
		{
			 Numero4 += 4;
		}
		else if (Numero2 == "cinco" || Numero2 == "Cinco")
		{
		 Numero4 += 5;
		}
		else if (Numero2 == "seis" || Numero2 == "Seis")
		{
		 Numero4+= 6;
		}
		else if (Numero2 == "siete" || Numero2 == "Siete")
		{
		 Numero2 += 7;
		}
		else if (Numero2 == "ocho" || Numero2 == "Ocho")
		{
		 Numero4 += 8;
		}
		else if (Numero2 == "Nueve" || Numero2 == "nueve")
		{
			 Numero4 += 9;
		}
		else if (Numero2 == "Diez" || Numero2 == "diez")
		{
			Numero4 += 10;
		}
		cout << "Ahora escribe en simbolo de la operacion\n";
		char simobolo;
		cin >> simobolo;
		switch (simobolo)
		{
		case '+':
			cout << Numero3 + Numero4;
			break;
		case '-':
			cout << Numero3 - Numero4;
			break;
		case '/':
			cout << Numero3 / Numero4;
			break;
		case '*':
			cout << Numero3 * Numero4;
			break;
		}

		cin.get();
		cin.ignore();
		return 88;
	}
}

int Ejercicio8()
{
	cout << "Bienvenidos a la calculadora de arroz\n";
	cout<<"Introduce un numero y la caluculadora te dira si es suficiente arroz para el inventor\n";
	int Numeros = 0;
	int contador = 1;
	int NumerosMultiplicados;
	cin >> Numeros;
	while (contador != Numeros)
	{
		contador++;
		NumerosMultiplicados = contador*2;
	}



	if (NumerosMultiplicados == 1000)
	{
		cout << Numeros << " cuadros fueron necesarios para darle 1000 granos de arroz al inventor\n";

	}
	else if (NumerosMultiplicados == 1000000)
	{
		cout << Numeros << " cuadros fueron necesarios para darle 1,000,000 granos de arroz al inventor\n";
		
	}
	else if (NumerosMultiplicados == 1000000000)
	{
		cout << Numeros << " cuadros fueron necesarios para darle 1,000,000,000 granos de arroz al inventor\n";

	}
	else if(NumerosMultiplicados<1000)
	{
		cout << "Te falto arroz";
	}
	else if (NumerosMultiplicados > 1000000000)
	{
		cout << "Te pasaste de arroz";
	}
	else
	{
		cout << "Tal vez estas a la mitad";
	}
	cin.get();
	cin.ignore();
	return 55;
}
		

	
int ejercicio9()
{
	cout << "Bienvenidos a la calculadora de arroz\n";
	cout << "Introduce un numero y la caluculadora te dira si es suficiente arroz para el inventor\n";
	int Numeros = 0;
	int contador = 1;
	int NumerosMultiplicados;
	cin >> Numeros;
	while (contador != Numeros)
	{
		contador++;
		NumerosMultiplicados = contador * 2;
	}
	cout << NumerosMultiplicados;
	cin.get();
	cin.ignore();
	return 54;
}

int ejericio10()
{
	cout << "Bienvenidos a la calculadora de arroz\n";
	cout << "Introduce un numero y la caluculadora te dira si es suficiente arroz para el inventor\n";
	double Numeros = 0;
	double contador = 1;
	double NumerosMultiplicados;
	cin >> Numeros;
	while (contador != Numeros)
	{
		contador++;
		NumerosMultiplicados = contador * 2;
	}
	cout << NumerosMultiplicados;
	cin.get();
	cin.ignore();
	return 21;
}

int main()
{
	vector<string>Piedras{ "Piedra","Papel","Tijeras" };
	string Usuario;
	int PC;
	cout << "Escribe piedra papel o tijeras\n";
	cin >> Usuario;
	
		if (Usuario == Piedras[0])
		{
			cout << Piedras[0];
			cout << "Gano la PC\n";
		}
		else if (Usuario == Piedras[1])
		{
			cout << Piedras[1];
			cout << "Ganaste\n";
		}
		else if (Usuario == Piedras[2])
		{
			cout << Piedras[2];
			cout << "Ganaste\n";
		}
	
}
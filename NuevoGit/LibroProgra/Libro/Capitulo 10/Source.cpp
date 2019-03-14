#include <iostream>
#include <vector>
#include<fstream>
#include<string>
using namespace std;


class Punto {
	public:
	int x;
	int y;
	Punto() :x(0), y(0) { }
	Punto(int xx, int yy) :x(xx), y(yy) { }
};

bool operator==(const Punto& Punto1, const Punto& Punto2)
{
	return Punto1.x == Punto2.x && Punto1.y == Punto2.y;
}

bool operator!=(const Punto& Punto1, const Punto& Punto2)
{
	return !(Punto1 == Punto2);
}

ostream& operator<<(ostream& Output, const Punto& Punto)
{
	return Output << '(' << Punto.x << ',' << Punto.y << ')';
}

istream& operator>>(istream& InputStream, Punto& Puntos)
{
	int x, y;
	char ch1, ch2, ch3;
	InputStream >> ch1 >> x >> ch2 >> y >> ch3;
	if (!InputStream) return InputStream;
	if (ch1 != '(' || ch2 != ',' || ch3 != ')') {
		InputStream.clear(ios_base::failbit);
		return InputStream;
	}
	Puntos = Punto(x, y);
	return InputStream;
}


void ImprimreVectores(const vector<Punto>& Puntos)
{
	for (int i = 0; i < Puntos.size(); ++i)
		cout << Puntos[i] << endl;
}


void EscribirArchivo(const vector<Punto>& Puntos, const string& Nombre)
{
	ofstream OutputStream(Nombre.c_str());
	if (!OutputStream) cout<<"No se pudo abrir sorry ", Nombre;
	for (int i = 0; i < Puntos.size(); ++i)
		OutputStream << Puntos[i] << endl;
}


void Llenar(vector<Punto>& Puntos, const string& Nombre)
{
	ifstream InputStream(Nombre.c_str());
	if (!InputStream) cout<<"No se pudo abrir, ", Nombre;
	Punto p;
	while (InputStream >> p) Puntos.push_back(p);
}

void ComparadorDeVectores(const vector<Punto>& Puntos1, const vector<Punto>& Puntos2)
{
	if (Puntos1.size() != Puntos2.size())
		cout<<("Algo salio mal");
	for (int i = 0; i < Puntos1.size(); ++i) {
		if (Puntos1[i] != Puntos2[i])
			cout<<("Algo salio mal");
	}
}

int Drill()
 {
	
	vector<Punto> Puntos;
	cout << "Pon 4 (x,y) pares:\n";
	for (int i = 0; i < 4; ++i) {
		Punto p;
		cin >> p;
		Puntos.push_back(p);
	}

	cout << "Estos son tus puntos origniales:\n";
	ImprimreVectores(Puntos);

	
	string NombreDeArchivo = "Drill.txt";
	EscribirArchivo(Puntos, NombreDeArchivo);

	vector<Punto> PuntosProcesados;
	Llenar(PuntosProcesados, NombreDeArchivo);

	
	cout << "Los datos procesados:\n";
	ImprimreVectores(PuntosProcesados);
	cout << "Datos orignales:\n";
	ImprimreVectores(Puntos);


	ComparadorDeVectores(Puntos,PuntosProcesados);
	cin.ignore();
	cin.get();
	return 6;
}






void LectorDeEnteros(vector<int>& Numeros, const string& Nombre)
{
	ifstream Leer(Nombre.c_str());
	if (!Leer) cout<<"No se pudo abrir el archivo ", Nombre;
	int numero;
	while (Leer >> numero) Numeros.push_back(numero);
}


int Suma(const vector<int>& Vector)
{
	int suma = 0;
	for (int i = 0; i < Vector.size(); ++i)
		suma += Vector[i];
	return suma;
}

int main()
{
	cout << "Ponga el nombre del archivo: ";
	string NombreDeArchivo;
	cin >> NombreDeArchivo;
	vector<int> Enteros;
	LectorDeEnteros(Enteros, NombreDeArchivo);
	int suma = Suma(Enteros);
	cout << "La suma de  " << NombreDeArchivo << " es " << suma << ".\n";
	cin.ignore();
	cin.get();
}




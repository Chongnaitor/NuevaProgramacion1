#include <iostream>
#include <vector>
#include<fstream>

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

istream& operator>>(istream& is, Punto& p)
{
	int x, y;
	char ch1, ch2, ch3;
	is >> ch1 >> x >> ch2 >> y >> ch3;
	if (!is) return is;
	if (ch1 != '(' || ch2 != ',' || ch3 != ')') {
		is.clear(ios_base::failbit);
		return is;
	}
	p = Punto(x, y);
	return is;
}


void ImprimreVectores(const vector<Punto>& Puntos)
{
	for (int i = 0; i < Puntos.size(); ++i)
		cout << Puntos[i] << endl;
}


void EscribirArchivo(const vector<Punto>& Puntos, const string& Nombre)
{
	ofstream ost(Nombre.c_str());
	if (!ost) cout<<"No se pudo abrir sorry ", Nombre;
	for (int i = 0; i < Puntos.size(); ++i)
		ost << Puntos[i] << endl;
}


void Llenar(vector<Punto>& Puntos, const string& Nombre)
{
	ifstream ist(Nombre.c_str());
	if (!ist) cout<<"No se pudo abrir, ", Nombre;
	Punto p;
	while (ist >> p) Puntos.push_back(p);
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

int main()
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
}

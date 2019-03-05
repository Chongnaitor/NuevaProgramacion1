#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Alumno {
public:

	std::string Name;
	string Grade;
	std::string Grupo;
public:
	Alumno(std::string Nombre, string Calificacion, string Grup)
		:Name(Nombre), Grade(Calificacion),Grupo(Grup) {}
};


int main()
{
	fstream AbreArchivos;
	AbreArchivos.open("alumnos.txt", fstream::in | fstream::out | fstream::app);
	vector<Alumno>Alumnos;
	string line;
	while (getline(AbreArchivos, line))
	{
		std::stringstream linestream(line);
		std::string         data;
		int                 val1;
		string               data2;
		std::getline(linestream, data, '\t');
	}

}


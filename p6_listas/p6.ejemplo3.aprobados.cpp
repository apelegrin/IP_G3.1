#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

void guardarFichero (list<float> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<float>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}
		f << endl;
		f.close();
	}
}

void cargarFichero (list<float> &S, string nombre) {
	ifstream f;
	float dato;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear ();
		while (f >> dato) { // mientras la lectura sea exitosa
			S.push_back (dato); // Registrar (S, dato)
		}
		f.close();
	}
}

int main()
{
	list<float> S;
	list<float>::iterator EA;
	int aprobados;
	cargarFichero (S, "entrada3.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA = S.begin(); //Comenzar
	aprobados = 0;
	while (EA != S.end()) {
		//Tratamiento
		if (*EA >= 5.0){
			aprobados++;
		}
		//Avanzar
		EA++;
	}
	cout << "nº de aprobados " << aprobados << endl;
	return 0;
}

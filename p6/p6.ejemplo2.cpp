#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

const char MARCA_FIN_LINEA = '\n';

void guardarFicheroInt (list<int> S, string nombre) {
	ofstream f;
	list<int>::iterator EA;

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

void cargarFicheroInt (list<int> &S, string nombre) {
	ifstream f;
	int dato;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista	
		while (f >> dato) {
			S.push_back (dato);
		}
	}
	f.close();
}


int main()
{
	list<int> S, R;
	list<int>::iterator EA;
	cargarFicheroInt (S, "entrada2.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA = S.begin();
	while (EA != S.end()) {
		cout << *EA << ", ";
		R.push_back ((*EA)*(*EA)); // Registrar(R, (*EA_S)*(*EA_S))
		EA++;
	}
	guardarFicheroInt (R, "salida2.txt");

	return 0;
}

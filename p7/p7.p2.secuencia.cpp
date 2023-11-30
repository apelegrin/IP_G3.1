#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

void guardarFichero (list<int> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
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

void cargarFichero (list<int> &S, string nombre) {
	ifstream f;
	int dato;

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
	list<int> S;
	list<int> R;
	list<int>::iterator EA;
	
	int anterior;
	int n;
	cargarFichero (S, "entrada7_2.txt");
	/* Tercer esquema de recorrido del 1º MAS */
	
	//Comenzar;
	EA = S.begin();
	//SEGÚN FDS
	//FDS :
	if (EA == S.end()){
		//{Tratamiento sec. vacía }
		cout << "Secuencia Vacía" << endl;
	}
	//NO FDS :
	else {
		//{ Tratamiento 1er elemto. }
		anterior = *EA;
		n = 1;
		do { //ITERAR
			EA++; //Avanzar
			//DETENER FDS;
			if (EA == S.end()) break;
			//{ Tratamiento de EA }
			R.push_back(anterior+*EA);
			anterior = *EA;
			n = n + 1;
		} while(true); //FIN_ITERAR;
		//{ Terminación del tratto. }
		if (n == 1){
			cout << "Secuencia Vacía" << endl;
		}
	}//FIN_SEGÚN;

	guardarFichero (R, "salida7_2.txt");
	
	return 0;
}

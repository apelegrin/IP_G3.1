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

bool esPar(int n){
   bool resultado;
   if ((n % 2) == 0){
	   resultado = true;
   } else {
	   resultado = false;
   }
   return resultado;
}

int main()
{
	list<int> S;
	list<int>::iterator EA;
	
	cargarFichero (S, "entrada7_3.txt");
	/* Esquema de búsqueda del 1º MAS */
	EA = S.begin(); //Comenzar; // Inicialización del invariate
	//MIENTRAS NO FDS YDESPUÉS NO Pro (EA) HACER
	while ( (EA != S.end()) && (!esPar(*EA)) ){
		// TTos. para mantener el invariante
		EA++;//Avanzar
	} //FIN_MIENTRAS;
	//SEGÚN FDS
	if (EA == S.end()){
		//FDS : { Tratto. elemento no encontrado }
		cout << "Elemento no encontrado" << endl;
	}else {
		//NO FDS : { Tratamiento EA encontrado }
		cout << "Encontrado par " << *EA << endl;
	}//FIN_SEGÚN;

	return 0;
}

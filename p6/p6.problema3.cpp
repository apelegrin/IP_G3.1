#include <iostream>
using namespace std;
int main()
{
	const int MF=-1;

	int EA; // Elemento actual
    int ant;
    int cont;//Elementos generados en la secuencia R de salida
    
	// Tercer de recorrido del primer modelo de acceso secuencial
	cout << "Introduce una serie de reales, para terminar el -1" << endl;
	//Comenzar
	cin >> EA;
	if (EA == MF){
			//{Tratamiento sec. vacía }
			cout << "La secuencia está vacía" << endl;
	}
	else {
			//{ Tratamiento 1er elemto. }
			ant = EA;
			cont = 0;
			do { 						 //ITERAR
				//Avanzar
				cin >> EA;
				if (EA == MF) break ;		//DETENER FDS;
				//{ Tratamiento de EA }
				cout << EA+ant << ", ";
				cont++;
				ant = EA;
			} while(true); 				//FIN_ITERAR;
			//{ Terminación del tratto. }
			if (cont == 0){
				cout << "La secuencia está vacía" << endl;
			}
	}//end_if
	
	return 0;
}

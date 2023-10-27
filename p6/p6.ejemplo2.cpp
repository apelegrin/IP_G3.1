#include <iostream>
using namespace std;
int main()
{
	const int MF=-100;

	int EA; // Elemento actual
	int EA_R;

	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de enteros, para terminar el -100"<<endl;
	// Comenzar
	cin >> EA; 
	while (EA != MF) { // Condición de finalización
		//Procesar
		EA_R = EA * EA;
		cout << EA_R << ","; // Registrar en la salida
		// Avanzar
		cin >> EA; 
	}
	return 0;
}

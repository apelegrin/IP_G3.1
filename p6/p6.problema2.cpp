#include <iostream>
using namespace std;
int main()
{
	const int MF=-1;

	int EA; // Elemento actual

	int sumaParcial;
    
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de reales, para terminar el -1"<<endl;
	// Comenzar
	cin >> EA; 
	sumaParcial = 0;
	while (EA != MF) { // Condición de finalización
		//Procesar
		sumaParcial = sumaParcial + EA;
		cout << sumaParcial << ",";
		// Avanzar
		cin >> EA; 
	}
	
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	const float MF=-1;

	float EA; // Elemento actual
	float cont;
    cont = 0;
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de reales, para terminar el -1"<<endl;
	// Comenzar
	cin >> EA; 
	while (EA != MF) { // Condición de finalización
		//Procesar
		if (EA >= 5.0){
			cont = cont + 1;
		}
		// Avanzar
		cin >> EA; 
	}
	cout << "El número de aprobados es: " << cont;
	return 0;
}

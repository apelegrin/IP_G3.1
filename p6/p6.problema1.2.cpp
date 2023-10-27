#include <iostream>
using namespace std;
int main()
{
	//Ejemplo que no funciona correctamente
	//ya que le falta el Comenzar
	const int MF=-1;

	int EA; // Elemento actual

	int cont;
    cont = 0;
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de reales, para terminar el -1"<<endl;
	// Comenzar
	//cin >> EA; 
	while (EA != MF) { // Condición de finalización
		//Procesar
		cout << EA << ",";
		cont = cont + 1;
		// Avanzar
		cin >> EA; 
	}
	cout << "El número de datos procesados es: " << cont;
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	const int MF=-1;

	int EA; // Elemento actual
    
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout << "Introduce una serie de reales, para terminar el -1" << endl;
	//Comenzar
	cin >> EA;
	while ( (EA != MF) && (EA % 2 != 0) ){
		//Tratamiento
		cout << EA << ", ";
		//Avanzar
		cin >> EA;
	}
	if (EA == MF) {
		cout << "Número par no encontrado";
	}
	else {
		cout << "Encontrado " << EA;
	}
	cout << endl;
	return 0;
}

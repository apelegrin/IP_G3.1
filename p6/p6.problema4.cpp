#include <iostream>
using namespace std;

bool esPar(int n){
  if (n % 2 == 0){
	  return true;
  }else{
	  return false;
  }
}
int main()
{
	const int MF=-1;

	int EA; // Elemento actual
    
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout << "Introduce una serie de reales, para terminar el -1" << endl;
	//Comenzar
	cin >> EA;
	while ( (EA != MF) && (!esPar(EA)) ){
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

#include <iostream>
using namespace std;

int main() {

	/* Léxico */
	int dividendo,divisor;
	int cociente,resto;
	int prueba;
	
	/* Algoritmo*/
	dividendo = 0;
	divisor = 0;
	cociente = 0;
	resto = 0;
	prueba = 0;
	//Filtrar la entrada de datos
	do {
		cout << "Dividendo y divisor ";
		cin >> dividendo >> divisor;
	} while((divisor<=0) || (dividendo < divisor) );
	
	resto = dividendo;
	while (resto >= divisor){
		resto = resto - divisor;
		cociente++;
	}
	cout << dividendo << "/" << divisor << "=" << cociente << endl;
	cout << "resto=" << resto << endl;	
	prueba = divisor * cociente + resto;
	cout << "Prueba " << dividendo << "=" << prueba << endl;
}

#include <iostream>
using namespace std;

void divisionEntera(int dividendo,int divisor,
				    int &cociente, int &resto){
	resto = dividendo;
	cociente = 0;
	while (resto >= divisor){
		resto = resto - divisor;
		cociente++;
	}				
}

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
	
	divisionEntera(dividendo,divisor,cociente,resto);
	
	cout << dividendo << "/" << divisor << "=" << cociente << endl;
	cout << "resto=" << resto << endl;	
	prueba = divisor * cociente + resto;
	cout << "Prueba " << dividendo << "=" << prueba << endl;
}

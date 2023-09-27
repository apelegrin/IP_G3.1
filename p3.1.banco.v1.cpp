#include <iostream>

using namespace std;

int main () {
	//Léxico
	float cantidadPrestada, interesMensual, cantidadMensual;
	float capital, interes;
	int numeroMeses;
    char clienteRiesgo;
    
    //Algoritmo 
	cout << "Introduce la cantidad prestada   >";
	cin >> cantidadPrestada;
	cout << "Introduce el nº de meses         >";
	cin >> numeroMeses;
	cout << "Introduce el interés mensual (%) >";
	cin >> interesMensual;
	cout << "Cliente de riesgo (s/n)          >";
	cin >> clienteRiesgo;
	
	interes = numeroMeses * interesMensual / 100.0;
	capital = cantidadPrestada * (1.0 + interes);
		
	if ((clienteRiesgo == 's') || (clienteRiesgo == 'S')){
		capital = capital * 1.01; //recargo 1%
	}
	
	cantidadMensual = capital / numeroMeses;
	
	cout << "La cuota mensual es de >" << cantidadMensual <<
		"€" << endl;
	
	return 0;
}






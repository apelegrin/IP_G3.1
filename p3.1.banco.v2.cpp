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
	if ((numeroMeses >= 1) && (numeroMeses <= 24)){
		interes = numeroMeses * interesMensual / 100.0;
		capital = cantidadPrestada * (1.0 + interes);
		
		if ((clienteRiesgo == 's') || (clienteRiesgo == 'S')){
			capital = capital * 1.01; //recargo 1%
		}
	
		cantidadMensual = capital / numeroMeses;
	
		cout << "La cuota mensual es de >" << cantidadMensual <<
			"€" << endl;
	}else {
		cout << "Error en el nº de meses (de 1 a 24)" << endl;
	}
	return 0;
}






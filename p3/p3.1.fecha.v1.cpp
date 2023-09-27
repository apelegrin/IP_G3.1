#include <iostream>

using namespace std;

int main () {
	//Léxico
	int diaEntrada, mesEntrada, anoEntrada;
	int diaSalida,  mesSalida,  anoSalida;
	int diaFinMes;
    //Algoritmo 
	cout << "Dime la feca (dd mm aa)   >";
	cin >> diaEntrada >> mesEntrada >> anoEntrada;
		
	//Determinamos el número de días del mes
	if ((mesEntrada==4)||(mesEntrada==6)||(mesEntrada==9)||(mesEntrada==11)){
		diaFinMes = 30;	} 
	else if (mesEntrada==2){
		diaFinMes = 28;}
	else { diaFinMes = 31; }
	
	//por defecto el día siguiente
	diaSalida = diaEntrada + 1;
	mesSalida = mesEntrada;
	anoSalida = anoEntrada;
	
	//Si nos pasamos del máximo día del mes avanzamos mes
	if (diaSalida > diaFinMes){
		if (mesEntrada != 12){
			diaSalida = 1;
			mesSalida = mesEntrada + 1;
	    } else {
			//si es diciembre avanzamos año
			diaSalida = 1;
			mesSalida = 1;
			anoSalida = anoEntrada + 1;
		}
	} 
	
	cout << "Fecha :"<< diaSalida<<"/"<<mesSalida<<"/"<<
		anoSalida<<endl;
	return 0;
}






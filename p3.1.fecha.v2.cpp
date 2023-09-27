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
		
	if ((mesEntrada==4)||(mesEntrada==6)||(mesEntrada==9)||(mesEntrada==11)){
		diaFinMes = 30;	} 
	else if (mesEntrada==2){
		diaFinMes = 28;}
	else { diaFinMes = 31; }
	
	if (diaEntrada < diaFinMes){
		//Si no es fin de mes avanzo dia
		diaSalida = diaEntrada + 1;
		mesSalida = mesEntrada;
		anoSalida = anoEntrada;
	} 
	else if (mesEntrada != 12){
		//Si es fin de mes pero no diciembre avanzo mes
		diaSalida = 1;
		mesSalida = mesEntrada + 1;
		anoSalida = anoEntrada;
	} else {
		//diciembre avanzo año
		diaSalida = 1;
		mesSalida = 1;
		anoSalida = anoEntrada + 1;
	}
	
	cout << "Fecha :"<< diaSalida<<"/"<<mesSalida<<"/"<<
		anoSalida<<endl;
	return 0;
}






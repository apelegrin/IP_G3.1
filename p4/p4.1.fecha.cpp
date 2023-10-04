#include <iostream>

using namespace std;

struct Fecha {
	int dd;
	int mm;
	int aa;
};

int main () {
	//Léxico
	Fecha fechaEntrada;
	Fecha fechaSalida;
	
	// diaEntrada -> fechaEntrada.dd;
	
	int diaFinMes;
    //Algoritmo 
	cout << "Dime la feca (dd mm aa)   >";
	cin >> fechaEntrada.dd >> fechaEntrada.mm >> fechaEntrada.aa;
		
	if ((fechaEntrada.mm==4)||(fechaEntrada.mm==6)||(fechaEntrada.mm==9)||(fechaEntrada.mm==11)){
		diaFinMes = 30;	} 
	else if (fechaEntrada.mm==2){
		diaFinMes = 28;}
	else { diaFinMes = 31; }
	
	if (fechaEntrada.dd < diaFinMes){
		//Si no es fin de mes avanzo dia
		fechaSalida.dd = fechaEntrada.dd + 1;
		fechaSalida.mm = fechaEntrada.mm;
		fechaSalida.aa = fechaEntrada.aa;
	} 
	else if (fechaEntrada.mm != 12){
		//Si es fin de mes pero no diciembre avanzo mes
		fechaSalida.dd = 1;
		fechaSalida.mm = fechaEntrada.mm + 1;
		fechaSalida.aa = fechaEntrada.aa;
	} else {
		//diciembre avanzo año
		fechaSalida.dd = 1;
		fechaSalida.mm = 1;
		fechaSalida.aa = fechaEntrada.aa + 1;
	}
	
	cout << "Fecha :"<< fechaSalida.dd<<"/"<<fechaSalida.mm<<"/"<<
		fechaSalida.aa<<endl;
	return 0;
}






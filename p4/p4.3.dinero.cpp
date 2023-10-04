#include <iostream>
using namespace std;

 /*Pre: dividendo y divisor sean valores int */
 /*Post: retorne el cociente y resto de la división */
void divisionEntera (int dividendo,int divisor,
			         int &cociente, int &resto)
{
	cociente = dividendo / divisor;
	resto = dividendo % divisor;
}

int main() {
	//Lexico
	int cantidad, resto;
	int quinientos,cien,cincuenta,veinte;
	int diez, cinco;
	
	//Code
	cout << "Cantidad a convertir ";
	cin >> cantidad;
	divisionEntera(cantidad,500,quinientos,resto);
	divisionEntera(resto,100,cien,resto);
	divisionEntera(resto,50,cincuenta,resto);
	divisionEntera(resto,20,veinte,resto);
	divisionEntera(resto,10,diez,resto);
	divisionEntera(resto,5,cinco,resto);
	
	cout << quinientos << " billetes de 500€"<<endl;
	cout << cien 	   << " billetes de 100€"<<endl;
	cout << cincuenta  << " billetes de 50€"<<endl;
	cout << veinte     << " billetes de 20€"<<endl;
	cout << diez       << " billetes de 10€"<<endl;
	cout << cinco      << " billetes de 5€"<<endl;
	cout << resto      << "€ en monedas"<<endl;
	return 0;
}









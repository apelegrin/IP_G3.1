#include <iostream>

using namespace std;

int main () {
	//Léxico
	int nota;	

    //Algoritmo
	cout << "Introduce una calificación >";
	cin >> nota;
	if (nota == 20) {
		cout << "M. De Honor" << endl;}
	else if ((nota == 19) || (nota == 18)){
		cout << "Sobresaliente" << endl;}
	else if ((nota == 17) || (nota == 16)){
		cout << "Notable" << endl;}
	else if ((nota == 15) || (nota == 14)){
		cout << "Aprobado" << endl;}
	else {
		cout << "Suspenso" << endl;}
	return 0;
}

#include <iostream>

using namespace std;

int main () {
	//Léxico
	char PermisoConducir;	

    //Algoritmo
	cout << "Introduzca el tipo de licencia: ";
	cin >> PermisoConducir;
	switch (PermisoConducir) {
		case 'A':
			cout << "Motocicletas y triciclos de motor";
			break;
		case 'B' :
			cout << "Automóviles masa máxima autorizada <= 3500 kg";
			break;
		case 'C' :
			cout << " Automóviles masa máxima autorizada > 3500 kg ";
			break;
		default :
			cout << "No contemplado";
			break;
	}
	return 0;
}

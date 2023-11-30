#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

void guardarFichero (list<float> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<float>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}
		f << endl;
		f.close();
	}
}

void cargarFichero (list<float> &S, string nombre) {
	ifstream f;
	float dato;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear ();
		while (f >> dato) { // mientras la lectura sea exitosa
			S.push_back (dato); // Registrar (S, dato)
		}
		f.close();
	}
}

int main()
{
	list<float> S;
	list<float>::iterator EA;
	
	float media;
	float menor40;
	float entre40y50;
	float mayor50;
	float sumaPesos;
	
	cargarFichero (S, "entrada7_1.txt");
	/* Segundo esquema de recorrido del 2º MAS */
	EA = S.end(); //Iniciar
	//EsVacía :
	if (EA == S.begin()){ //SEGUN EsVacía
		//{Tratamiento sec. vacía }
		cout << "Secuencia vacía" << endl;
	}
	//NO EsVacía :
	else { 
		//{ Inic. del tratamiento }
		media = 0;
		menor40 = 0;
		entre40y50 = 0;
		mayor50 = 0;
		sumaPesos = 0;
		do { //REPETIR
			//Avanzar
			EA--;
			//{ Tratamiento de EA }
			if (*EA < 40){
				menor40 = menor40 + 1;
			}else if (*EA <= 50) {
				entre40y50 = entre40y50 + 1;
			}else{
				mayor50 = mayor50 + 1;
			}
			sumaPesos = sumaPesos + *EA;
		} while (!(EA == S.begin())); //HASTA EsÚltimo;
		//{ Terminación del tratto. }
		media = sumaPesos / (menor40 + entre40y50 + mayor50);
		cout << "Menores de 40 hay :" << menor40 << endl;
		cout << "Entre 40 y 50 hay :" << entre40y50 << endl;
		cout << "Mayores de 50 hay :" << mayor50 << endl;
		cout << "La media es       :" << media << endl;
	}//FIN_SEGÚN;
	
	return 0;
}

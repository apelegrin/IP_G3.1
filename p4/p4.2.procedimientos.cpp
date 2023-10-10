#include <iostream>
using namespace std;

/*
 * BinDec procedimiento para obtener el equivalente en binario
 * de 4 bits
 * BinDec (dato b4 : Entero,
 * 	       dato b3 : Entero,
 *         dato b2 : Entero,
 *         dato b1 : Entero,
 *         dato_resultado : Entero)
 * 
 * 
 * PRE {b1, b2, b3, b4 :Entero, 0 <= b1 <= 1; 0 <= b2 <= 1; 
 * 		0 <= b3 <= 1; 0 <= b4 <= 1; }
 * POST {resultado: Entero; valor correspondiente en decimal 
 * 	a dato binario definido por b4,b3,b2,b1}
 * 
 */
 
void BinDec (int b3, int b2, int b1, int b0, int &decimal)
{
	decimal = b0*1 + b1*2 + b2*4 + b3*8;
}

 /*Pre: a y b tipo char */
 /*Post: a yb hayan intercambiado su valor */
void Intercambio (char &a, char &b)
{
	char aux;

	aux = a;
	a = b;
	b = aux;
}

int main() {
	//Lexico
	int b1, b2, decimal1, decimal2;
	char x, y, z;
	
	//Code
	b1 = 0;
	b2 = 1;
	x = 'O';
	y = 'P';
	z = 'Q';
	
	Intercambio (x, y); //OPQ -> POQ
	Intercambio (y, z); //POQ -> PQO
	//0101 -> 5
	BinDec (b1, b2, b1, b2, decimal1);
	//0100 -> 4
	BinDec (0, 1, b1, b1, decimal2);
	cout << "Valor de las variables x, y, z es: " << x << y << z << endl;
	cout << "El valor del numero 1 es : " << decimal1 << endl;
	cout << "El valor del numero 2 es : " << decimal2 << endl;
	return 0;
}

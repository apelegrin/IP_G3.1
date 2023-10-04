#include <iostream>
using namespace std;

 /*Pre: b3,b2,b1,b0 sean valores binarios */
 /*Post: retorne el valor decimal equivalente al valor binario b3 b2 b1 b0 */
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

#include <iostream>
using namespace std;

int max2 (int a, int b)
{
	int mayor;
	if (a > b) {
		mayor = a; }
	else {
		mayor = b; }
	return mayor;
}

int max3 (int a, int b, int c)
{
	return max2(max2(a,b), c);
}
int main() {
	//Lexico
	int d1,d2, d3;
	//Code
	cout << "Introduce 3 valores d1, d2 y d3 > ";
	cin >> d1 >> d2 >> d3;
	cout << "El mayor es " << max3(d1,d2,d3) << endl;
	return 0;
}









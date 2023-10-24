#include <iostream>
using namespace std;


int main() {

	/* Léxico */
    int an, n;
    int ant1, ant2, ant3;
	
	/* Algoritmo*/
	do {
		cout << "Introduce un n para calcular a(n)";
		cin >> n;
	}while(n < 0);
	/* Calcular los n_términos de la sucesión*/
	ant1 = 0;
	ant2 = 0;
	ant3 = 0;
	for (int i=0; i <= n; i++){
		switch (i){
			case 0:an = 1; break;
			case 1:an = 2; break;
			case 2:an = 3; break;
			default:
			    an = 3*ant1 - 2*ant3;
		}
		cout << "a(" << i << ")=" << an << endl;
		ant3 = ant2;
		ant2 = ant1;
		ant1 = an;
	}
}	








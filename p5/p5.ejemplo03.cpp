#include <iostream>
using namespace std;

int main () {
	int x, y, i, p;
	cout << "Introduce los límites [x,y] ";
	cin >> x >> y;
	p = 1;
	for (i = 1; i <= x; i++) {
		p = p*2;
	}
	cout << "2^" << x << "=" <<p << endl;//2^x
	for (i = x+1; i <= y; i++) {
		p = p*2;
		cout << "2^" << i << "=" <<p << endl;
	}
return 0;
}

#include <iostream>
using namespace std;

void tipoChar(char c){
	if ((c >= 'a') && (c <= 'z')) {
		cout << c << " Es una minúscula" << endl; }
	else if ((c >= 'A') && (c <= 'Z')) {
		cout << c << " Es una mayúscula" << endl; }
	else if ((c >= '0') && (c <= '9')) {
		cout << c << " Es un digito" << endl; }
	else if ((c == ',') || (c == '.') || (c == ':') || (c == ';')) {
		cout << c << " Es un signo de puntuación" << endl; }
	else {
		cout << c << " Carácter desconocido" << endl; }
}

int main() {
	char c; // carácter actual
	
	cout << "Introduce una frase: ";
	cin.get(c);
	while (c != '\n') // fin de línea de la entrada de datos
	{
		tipoChar(c); 
		cin.get(c);
	};
	

}

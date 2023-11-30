#include <iostream>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];
typedef float VectorFloat [N];

void imprimirTabla(Vector p){
	int i;
	for (i = 0; i < N; i=i+1) {
		if (p[i] > 0){
		cout << "Frec ["<<i<<"]="<< p[i] << endl;}
	}
	cout << endl;
}
void imprimirTablaRel(VectorFloat p){
	int i;
	for (i = 0; i < N; i=i+1) {
		cout << "Frec ["<<i<<"]="<< p[i] <<"%"<< endl;
	}
	cout << endl;
}

int main () {
	Vector frecu;
	VectorFloat frecuRel;
	int EA;
	int i;
	float conta;
	
	/* Inicializar frecu */
	for (i = 0; i < N; i=i+1){
		frecu[i] = 0;
	}	
	
	/* Pedir datos */
	cout << "introduce calificaciones (-1 para fin) " << endl;
	cin >> EA; 
	if (EA == MF) {
		/* Tratamiento sec vacía*/
		cout << "Secuencia vacía" << endl;
	}else {
		conta = 0.0;
		while (EA != MF){
			//Tratamiento EA
			frecu[EA] = frecu[EA] + 1;
			conta = conta + 1;
			//Avanzar
			cin >> EA;
		}
		cout << "Leídos " << conta << endl;
		/* Tratamiento final */
		imprimirTabla(frecu);
		/* Calcular frec. Relativas */
		for (i = 0; i < N; i=i+1){
			frecuRel[i] = frecu[i]/conta * 100;
		}
		imprimirTablaRel(frecuRel);
	}
}





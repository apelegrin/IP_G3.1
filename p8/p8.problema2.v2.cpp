#include <iostream>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];
typedef float VectorFloat [N];

void imprimirTabla(Vector p, VectorFloat f){
	int i;
	for (i = 0; i < N; i=i+1) {
		if (p[i] > 0){
		cout << "Frec ["<<i<<"]="<< p[i] <<" F.Rel = "<< f[i]*100 <<"%"<< endl;}
	}
	cout << endl;
}

void calculaTablaFrecRel(Vector p, VectorFloat &f, float conta){
	int i;
	for (i = 0; i < N; i=i+1) {
		f[i] = p[i] / conta;
	}
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
		frecuRel[i] = 0.0;
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
		calculaTablaFrecRel(frecu,frecuRel,conta);
		imprimirTabla(frecu,frecuRel);
	}
}





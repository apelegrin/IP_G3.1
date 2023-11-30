#include <iostream>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];

void imprimirTabla(Vector p,float conta){
	int i;
	for (i = 0; i < N; i=i+1) {
		if (p[i] > 0){
		cout << "Frec ["<<i<<"]="<< p[i] <<" F.Rel = "<<(p[i] / conta * 100)<<"%"<< endl;}
	}
	cout << endl;
}

int hayMayor50(Vector p,float conta){
	int i;
	int resul;
	i = 0;
	resul = -1;
	while((i < N) && ((p[i] / conta) <= 0.5)){
		i=i+1;
	}
	if (i < N){
		resul = i;
	}
	return resul;
}

int main () {
	Vector frecu;
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
		imprimirTabla(frecu,conta);
		cout << "Busca :"<<hayMayor50(frecu,conta)<<endl;
	}
}





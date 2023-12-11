#include <iostream>
#include <iomanip> 
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];

int hayMayor50(Vector p, float conta){
	int i;
	//float fRel;
	int posi ;
	i = 0;
	posi = -1; //En principio no encontrado
	while ( (i < N) && ( p[i]/conta < 0.5) ){
		i++;
	}
	if (i < N){ //Si i < N es porque no hemos llegado al final de la tabla
		posi = i;
	}
	return posi;
}

void imprimirTabla(Vector p, float conta){
	int i;
	float fRel;
	cout << setprecision(3);
	for (i = 0; i < N; i=i+1) {
		if (p[i] > 0){
		   fRel = p[i] / conta;
		   cout << "Frec ["<<i<<"]="<< p[i] <<" F.Rel = "<< fRel*100 <<"%"<< endl;
		}
	}
	cout << endl;
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
		cout << "Encuentra = " << hayMayor50(frecu,conta) << endl;
	}
}





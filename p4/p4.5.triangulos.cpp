#include <iostream>
#include <cmath>

using namespace std;

struct Punto {
		float abscisa, ordenada;
};

struct Triangulo {
	Punto p1,p2,p3;
};

void leerTriangulo(Triangulo &t){
	cout << "P1 introduce el valor de (x,y) ";
	cin >> t.p1.abscisa >> t.p1.ordenada;
	cout << "P2 introduce el valor de (x,y) ";
	cin >> t.p2.abscisa >> t.p2.ordenada;
	cout << "P3 introduce el valor de (x,y) ";
	cin >> t.p3.abscisa >> t.p3.ordenada;
}

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x)
{
	return (x*x);
}

/* Pre: p1, p2 son Puntos de un espacio euclídeo bidimensional*/
/* Post: Devuelve la distancia entre ambos puntos */
float distancia(Punto p1, Punto p2){
	/* cálculo de la longitud del segmento definido por los dos puntos */
	return (sqrt ( sqr (p1.abscisa - p2.abscisa) + sqr (p1.ordenada - p2.ordenada)));
}

float perimetro(Triangulo t){
	float l1,l2,l3;
	l1 = distancia(t.p1,t.p2);
	l2 = distancia(t.p2,t.p3);
	l3 = distancia(t.p1,t.p3);
	return (l1+l2+l3);
}

int main() {
	
	Triangulo miTriangulo;
	
	/* Introducción de datos */
	leerTriangulo(miTriangulo);
	
	
	/* mostramos el resultado */
	cout << "El perimetro es: " << perimetro(miTriangulo) << endl;
	return 0;
}


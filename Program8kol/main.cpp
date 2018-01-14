//Franciszek Mirecki KOLOKWIUM 1
#include "header.h"

using namespace std;

int main () {

	Wektor w1;
	Wektor::ileWektor();
	
	Wektor w2(7, 3, 6);
	Wektor::ileWektor();
	
	Wektor w3(w1);
	Wektor::ileWektor();
	
	w1.setX(7);
	w1.setY(2);

	float **m1 = new float*[3];
	for (int i = 0; i < 3; i++) {
		m1[i] = new float[3];
	}

	Wektor u1 = w1 - w2;
	
	m1[0][0] = u1.getX();
	m1[1][0] = u1.getX();
	m1[2][0] = u1.getX();
	m1[0][1] = u1.getY();
	m1[1][1] = u1.getY();
	m1[2][1] = u1.getY();
	m1[0][2] = u1.getZ();
	m1[1][2] = u1.getZ();
	m1[2][2] = u1.getZ();

	float **m2 = new float*[3];
	for (int i = 0; i < 3; i++) {
		m2[i] = new float[3];
	}

	Wektor u2 = w2 - w3;

	m2[0][0] = u2.getX();
	m2[1][0] = u2.getX();
	m2[2][0] = u2.getX();
	m2[0][1] = u2.getY();
	m2[1][1] = u2.getY();
	m2[2][1] = u2.getY();
	m2[0][2] = u2.getZ();
	m2[1][2] = u2.getZ();
	m2[2][2] = u2.getZ();
	
	Macierz A(m1);
	Macierz B(m2);
	
	B.AddColumn(w1);
	
	cout << B << endl; // w ostatniej kolumnie wyswietla zmieniony wektor w1[7, 2, 12], zamiast tak jak w poleceniu 6, 1, 12

	return 0;
}






//Franciszek Mirecki
#include "macierz.h"

using namespace std;

int main() {

	float **t1 = new float*[2];
	for (int i = 0; i < 2; i++) {
		t1[i] = new float[2];
	}

	t1[0][0] = 4.5;
	t1[1][0] = 6.5;
	t1[0][1] = 3.5;
	t1[1][1] = 1.5;

	float **t2 = new float*[2];
	for (int i = 0; i < 2; i++) {
		t2[i] = new float[2];
	}

	t2[0][0] = 2.1;
	t2[1][0] = 1.7;
	t2[0][1] = 7.3;
	t2[1][1] = 3.8;

	float **t3 = new float*[2];
	for (int i = 0; i < 2; i++) {
		t3[i] = new float[2];
	}

	t3[0][0] = 8.0;
	t3[1][0] = 12.0;
	t3[0][1] = 6.0;
	t3[1][1] = 2.0;

	Macierz A(t1);
	cout << "Macierz A: "<< endl << A << endl;
	Macierz B(t2);
	cout << "Macierz B: "<< endl << B << endl;
	Macierz C(t3);
	cout << "Macierz C: "<< endl << C << endl;

	Macierz D = !((A + B) * C);

	cout << "Macierz D: "<< endl << D << endl;

	return 0;
}

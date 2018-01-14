#include "macierz.h"

using namespace std;

Macierz::Macierz() {
	mac = new float*[2];
	mac[0] = new float[2];
	mac[1] = new float[2];
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mac[i][j] = 0.0;
		}
	}
}

Macierz::Macierz(float **tab) {
	mac = new float*[2];
	
	for (int i = 0; i < 2; i++) {
		mac[i] = new float[2];
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mac[i][j] = tab[i][j];
		}
	}
}

Macierz::~Macierz() {}

Macierz operator+(Macierz A, Macierz B) {
	
	Macierz C;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			C.mac[i][j] = A.mac[i][j] + B.mac[i][j];
		}
	}
	return C;
}

Macierz operator*(Macierz A, Macierz B) {
	Macierz C;
	
	C.mac[0][0] = A.mac[0][0]*B.mac[0][0]+A.mac[0][1]*B.mac[1][0];
	
	C.mac[0][1] = A.mac[0][0]*B.mac[0][1]+A.mac[0][1]*B.mac[1][1];
	
	C.mac[1][0] = A.mac[0][0]*B.mac[0][1]+A.mac[0][1]*B.mac[1][1];
	
	C.mac[1][1] = A.mac[0][0]*B.mac[][]+A.mac[0][0]*B.mac[0][0];
	
	return C;
}

Macierz operator!(Macierz A) {

	Macierz C;
	C.mac[0][0] = A.mac[0][0];
	C.mac[1][0] = A.mac[0][1];
	C.mac[0][1] = A.mac[1][0];
	C.mac[1][1] = A.mac[1][1];
	
	return C;
}

ostream& operator<<(ostream& x, Macierz& A) {
	Macierz C;
	
	
}

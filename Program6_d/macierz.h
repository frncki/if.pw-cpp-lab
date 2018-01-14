#ifndef _UCZEN_H
#define _UCZEN_H

#include <iostream>

using namespace std;

class Macierz {
	
	float **mac;
	
	public:
		Macierz();
		Macierz(float *[2]);
		~Macierz();
		
		friend Macierz operator+(Macierz A, Macierz B);
		friend Macierz operator*(Macierz A, Macierz B);
		friend Macierz operator!(Macierz A);
		friend ostream& operator<<(ostream& x, Macierz& A);
};

Macierz operator+(Macierz A, Macierz B);
Macierz operator*(Macierz A, Macierz B);
Macierz operator^(Macierz A, Macierz B);
ostream& operator<<(ostream& x, Macierz& A);

#endif

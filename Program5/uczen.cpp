#include "uczen.h"

using namespace std;

int Uczen::fCount = 0;

Uczen::Uczen(string n, int l, int k, int * o) {
	nazwisko = n;
	lOcen = l;
	klasa = k;
	oceny = new int[lOcen];
	for(int i = 0; i < lOcen; i++) {
		oceny[i] = o[i];
	}
	fCount++;
	}

Uczen::Uczen(const Uczen &u) {
	nazwisko = u.nazwisko;
	lOcen = u.lOcen;
	klasa = u.klasa;
	oceny = new int[lOcen];
	for(int i = 0; i < lOcen; i++) {
		oceny[i] = u.oceny[i];
	}
	fCount++;
}

Uczen::~Uczen() {fCount--;}

void Uczen::info() {
	cout << "Uczen " << nazwisko << " z klasy " << klasa << " ma oceny:" << endl;
	for (int i = 0; i < lOcen; i++) {
		cout << oceny[i] << endl;
	}
}

void Uczen::lUczniow() {
	cout << "Mamy " << fCount << " uczniow." << endl;
}

void Uczen::dodajOcene(int n) {
	int *tmp = new int[lOcen];
	for (int i = 0; i < lOcen; i++) {
		tmp[i] = oceny[i];
	}
	delete [] oceny;
	lOcen++;
	oceny = new int[lOcen];
	for (int i = 0; i < lOcen-1; i++) {
		oceny[i] = tmp[i];
	}
	oceny[lOcen-1] = n;
}

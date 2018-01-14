#include "rodzina.h"

using namespace std;

//Rodzic
Rodzic::Rodzic() {
	plec = 0;
	Imie = "Anna";
	nazwisko = "Kowalska-Nowak";
	zarobki = 3500;
}

Rodzic::Rodzic(bool p, string i, string n, float z) {
	plec = p;
	Imie = i;
	nazwisko = n;
	zarobki = z;
}

Rodzic::~Rodzic() {}

void Rodzic::info() {
	cout << "Rodzic" << endl;
	cout << "Plec: " << plec << endl;
	cout << "Imie: " << Imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Zarobki: " << zarobki << endl;
}

float operator+(Rodzic m, Rodzic t) {
	return (m.zarobki + t.zarobki);
}

//Dziecko
int Dziecko::fCount = 0;

Dziecko::Dziecko(const Dziecko& d) {
	imie = d.imie;
	lZabawek = d.lZabawek;
	wiek = d.wiek;
	cena = new float[lZabawek];
	for(int i = 0; i < lZabawek; i++) {
		cena[i] = d.cena[i];
	}
	fCount++;
}

Dziecko::Dziecko(string i, int w, int l, float* c) {
	imie = i;
	wiek = w;
	lZabawek = l;
	cena = new float[lZabawek];
	for(int i = 0; i < lZabawek; i++) {
		cena[i] = c[i];
	}
	fCount++;
}

Dziecko::~Dziecko() {fCount--;}

void Dziecko::setImie(string i) {
	imie = i;
}

void Dziecko::dodajZabawke(float z) {
	float *tmp = new float[lZabawek];
	for (int i = 0; i < lZabawek; i++) {
		tmp[i] = cena[i];
	}
	delete [] cena;
	lZabawek++;
	cena = new float[lZabawek];
	for (int i = 0; i < lZabawek-1; i++) {
		cena[i] = tmp[i];
	}
	cena[lZabawek-1] = z;
}

void Dziecko::ileDzieci() {cout << "Mamy " << fCount << " dzieci." << endl;}

float operator+(Dziecko a, Dziecko b) {
	
	float cena1 = 0;
	for (int i = 0; i < a.lZabawek; i++) {
		cena1 += a.cena[i];
	}
	
	float cena2 = {0};
	for (int i = 0; i < b.lZabawek; i++) {
		cena2 += b.cena[i];
	}
	
	return (cena1 + cena2);
}

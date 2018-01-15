#include "header.h"

using namespace std;

//Czastka
Czastka::Czastka(string N, float Q, double M) {
	name = N;
	q = Q;
	m = M;
}

Czastka::~Czastka() {}

void Czastka::info() {
	cout << name << endl;
	cout << "masa: " << m << "u" << endl;
	cout << "ladunek: " << q << "eV" << endl;
}

double Czastka::getM() {return m;}

//Proton
Proton::Proton(string N, float Q, double M, float S):Czastka(N, Q, M) {
	spin = S;
}

Proton::~Proton() {}

void Proton::info() {
	Czastka::info();
	cout << "Spin: " << spin << endl;
}

//Neutron
Neutron::Neutron(string N, float Q, double M, int Nq):Czastka(N, Q, M) {
	nQ = Nq;
}

Neutron::~Neutron() {}

void Neutron::info() {
	Czastka::info();
	cout << "Liczba kwarkow: " << nQ << endl;
}


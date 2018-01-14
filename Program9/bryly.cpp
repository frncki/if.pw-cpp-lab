#include "bryly.h"

using namespace std;

//Punkt
Punkt::Punkt(string n, float a, float b) {
	name = n;
	x = a;
	y = b;
}

Punkt::~Punkt() {}

void Punkt::print() {
	cout << "Punkt " << name << endl;
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
}
		
//Kula
Kula::Kula(string n, float a, float b, float c):Punkt(n, a, b) {
	r = c;
}

Kula::~Kula() {}

void Kula::print() {
	cout << "Kula" << endl;
	cout << "Srodek kuli: " << endl;
	Punkt::print();
	cout << "Promien: " << r << endl;
	cout << "Objetosc: " << (4/3)*M_PI*pow(r, 3) << endl;
}

//Szescian 
Szescian::Szescian(string n, float a, float b, float c):Punkt(n, a, b) {
	A = c;
}

Szescian::~Szescian() {}

void Szescian::print() {
	cout << "Szescian" << endl;
	cout << "Srodek szescianu: " << endl;
	Punkt::print();
	cout << "Bok: " << A << endl;
	cout << "Objetosc: " << pow(A, 3) << endl;
}

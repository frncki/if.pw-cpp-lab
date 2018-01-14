//Franciszek Mirecki KOLOKWIUM 1
#include "header.h"

using namespace std;

int Wektor::lWektor = 0;

Wektor::Wektor() { // domyslny
	x = 6;
	y = 1;
	z = 12;
	lWektor++;
}

Wektor::Wektor(float a, float b, float c) { //glowny
	x = a;
	y = b;
	z = c;
	lWektor++;
}

Wektor::Wektor(const Wektor& v) {
	x = v.x;
	y = v.y;
	z = v.z;
	lWektor++;
}

Wektor::~Wektor() {lWektor--;}

void Wektor::setX(float a) {x = a;}

void Wektor::setY(float b) {y = b;}

void Wektor::setZ(float c) {z = c;}

float Wektor::getX() {return x;}
	
float Wektor::getY() {return y;}

float Wektor::getZ() {return z;}

void Wektor::ileWektor() {
	cout << "Jest " << lWektor << " wektorow." << endl;
}

Wektor operator-(Wektor v, Wektor w) {
	Wektor u;
	u.x = v.x - w.x;
	u.y = v.y - w.y;
	u.z = v.z - w.z;
	return u;
}

//Macierz

Macierz::Macierz() { //domyslny
	mac = new float*[3];
	
	for (int i = 0; i < 3; i++) {
		mac[i] = new float[3];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mac[i][j] = 0.0;
		}
	}
}

Macierz::Macierz(float **tab) { // glowny
	mac = new float*[3];

	for (int i = 0; i < 3; i++) {
		mac[i] = new float[3];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mac[i][j] = tab[i][j];
		}
	}
}

Macierz::~Macierz() {}

void Macierz::AddColumn(Wektor v) {
	
	float **tmp = new float*[3];
	for (int i = 0; i < 3; i++) {
		tmp[i] = new float[3];
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tmp[i][j] = mac[i][j];
		}
	}
	delete [] mac;
	
	mac = new float*[3];
	for (int i = 0; i < 3; i++) {
		mac[i] = new float[4];
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mac[i][j] = tmp[i][j];
		}
	}
	
	mac[0][3] = v.x; 
	mac[1][3] = v.y; 
	mac[2][3] = v.z; 
}

ostream& operator<<(ostream& out, Macierz& A) {
	out << "| " << A.mac[0][0] << " " << A.mac[0][1] << " " << A.mac[0][2] << " " << A.mac[0][3] << " |" << endl << "| " << A.mac[1][0] << " " << A.mac[1][1] << " " << A.mac[1][2] << " " << A.mac[1][3] << " |" << endl << "| " << A.mac[2][0] << " " << A.mac[2][1] << " " << A.mac[2][2] << " " << A.mac[2][3]  << " |";
	return out;
}










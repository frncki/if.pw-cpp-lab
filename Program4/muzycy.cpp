#include "muzycy.h"

using namespace std;

void Rank::info() {
	cout<< endl << "1. Hetfield" << endl;
	cout << "2. Podsiadlo" << endl;
	cout << "3. Dio" << endl;
	cout << "4. Grechuta" << endl;
}
	
void Rank::save(int r, muzyk n) {
	rank = r;
	name = n;
}

void Rank::print() {
	if (name == 1) {
		cout << endl << rank << ". Hetfield" << endl;
	} else if (name == 2) {
		cout << endl << rank << ". Podsiadlo" << endl;
	} else if (name == 3) {
		cout << endl << rank << ". Dio" << endl; 
	} else {
		cout << endl << rank << ". Grechuta" << endl;
	}
}

int Rank::getRank() {return rank;}

muzyk Rank::getName() {return name;}

int Rank::fCount = 0;

Rank::Rank() {fCount++; rank = fCount; name = Hetfield;}

Rank::Rank(muzyk n) {fCount++; rank = fCount; name = n;}

Rank::~Rank() { cout << fCount << endl; fCount--;}

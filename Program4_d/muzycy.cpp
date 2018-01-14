#include "muzycy.h"

using namespace std;

int Rank::fCount = 1;

void Rank::info() {
	cout<< endl << "1 - Hetfield" << endl;
	cout << "2 - Podsiadlo" << endl;
	cout << "3 - Dio" << endl;
	cout << "4 - Grechuta" << endl;
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

Rank::Rank() {rank = fCount; name = Hetfield;}

Rank::Rank(muzyk n) {rank = fCount; name = n; fCount++;}

Rank::~Rank() {cout << endl << "Muzykow na liscie rankingowej jest " << fCount << endl; fCount--;}

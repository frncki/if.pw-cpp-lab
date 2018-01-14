//Franciszek Mirecki
#include "muzycy.h"

using namespace std;

int main () {

	/* Pierwsze 3 zadania
	Rank m1(Hetfield);
	Rank m2(Dio);
	Rank m3(Grechuta);
	Rank m4(Podsiadlo);

	m1.info();




	int n = 5;

	for (int i = 1; i < 5; i++) {
		n--;
		if (m1.getRank() == n) {
			m1.print();
		} else if (m2.getRank() == n) {
			m2.print();
		} else if (m3.getRank() == n) {
			m3.print();
		} else {
			m4.print();
		}
	}
	*/
	//Zadanie 4
	Rank * muzycy = new Rank[4];{Rank(), Rank(Grechuta), Rank(Dio), Rank(Podsiadlo);};

	for(int i = 4; i >= 1; i--) {
		for(int j = 0; j < 5; j++)
			if(i == muzycy[j].getRank()) {muzycy[j].print();}
	}

	delete [] muzycy;

	return 0;
}

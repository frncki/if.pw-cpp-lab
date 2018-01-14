//Franciszek Mirecki
#include "muzycy.h"

using namespace std;

int main () {
	
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
		
	return 0;
}

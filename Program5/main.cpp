//Franciszek Mirecki
#include "uczen.h"

using namespace std;

int main() {
	
	int t1[] = {5, 5, 4, 2, 1};
	int t2[] = {1, 3, 4};
	
	Uczen::lUczniow();
	
	Uczen u1("Pachocki", 5, 2, t1);
	Uczen::lUczniow();
	
	Uczen u2("Bochynska", 3, 4, t2);
	Uczen::lUczniow();
	
	Uczen u3(u2);
	Uczen::lUczniow();

	u3.dodajOcene(5);
	
	int t4[] = {5};
	
	Uczen * u4 = new Uczen("Kalicki", 1, 4, t4);
	
	cout << "Przedstawmy uczniow i ich oceny:" << endl;
	u1.info();
	u2.info();
	u3.info();
	u4->info();
	
	cout << endl << "Uczen z wymiany wrocil do siebie." << endl;
	delete u4;
	Uczen::lUczniow();
	
	return 0;
}

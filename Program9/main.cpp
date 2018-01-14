#include "bryly.h"

using namespace std;

int main () {
	
	Kula *k1 = new Kula("pierwszy", 1, 2, 5);
	Szescian * s1 = new Szescian("drugi", 2, 8, 16);
	cout << endl;
	cout << "~Bryly~" << endl;
	cout << endl;
	k1 -> print();
	cout << endl;
	s1 -> print();
	cout << endl;
	
	return 1;
}

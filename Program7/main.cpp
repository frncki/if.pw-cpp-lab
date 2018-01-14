#include "rodzina.h"

using namespace std;

int main() {
	
	Rodzic mama;
	Rodzic tata(1, "Andrzej", "Nowak", 3499);
	
	float t1[] = {54.0, 50.0, 4.5, 21.0};
	float t2[] = {10.99, 35.0, 42.99};
	
	Dziecko d1("Ola", 10, 4, t1);
	Dziecko d2("Jas", 6, 3, t2);
	Dziecko d3 = d2;
	d3.setImie("Marysia");
	d3.dodajZabawke(13.7);
	
	float zarobki = mama + tata;
	float wydatki1 = d1 + d2;
	float wydatki2 = d2 + d3;
	float wydatki3 = d1 + d3;
	float wydatki = (wydatki1 + wydatki2 + wydatki3)/2;
	
	mama.info();
	tata.info();
	
	Dziecko::ileDzieci();
	
	cout << endl << "Zarobki: " << zarobki << endl;
	cout << "Wydatki: " << wydatki << endl;
	cout << "Saldo: " << zarobki - wydatki << endl;
	
	return 0;
}

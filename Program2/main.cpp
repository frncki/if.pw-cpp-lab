#include "pizza.h"

using namespace std;

int main() {
	
	pizza p;
	goscie g;
	
	p.setMaka(20);
	p.setDrozdze(2);
	p.setCukier(1);
	p.setSol(0.5);
	p.setOliwa(2);
	p.setWoda(0.5);
	
	p.setDodatki(4);
	string listaDodatkow[p.getDodatki()];
	
	cout << endl << "Jakie dodatki chcesz do pizzy?" << endl;
	for (int i = 0; i < p.getDodatki(); i++) {
		cout << i + 1 << ". ";
		cin >> listaDodatkow[i];
	}
	g.setGlodni(true);
	g.setGuests(7);
	int nr = ilePizzy(g);
	robListe(p, nr, listaDodatkow);
	
	return 0;
}

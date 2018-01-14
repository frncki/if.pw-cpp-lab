#ifndef _UCZEN_H
#define _UCZEN_H

#include <iostream>
#include <string>

using namespace std;

class Uczen {
	string nazwisko;
	int lOcen, klasa;
	int *oceny;
	static int fCount;
	public:
		Uczen(string n, int l, int k, int * o);
		Uczen(const Uczen&);
		~Uczen();
		void info();
		static void lUczniow();
		void dodajOcene(int n);	
};

#endif

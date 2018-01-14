#ifndef _RODZINA_H
#define _RODZINA_H

#include <iostream>
#include <string>

using namespace std;

class Rodzic {
	
	bool plec;
	string Imie, nazwisko;
	float zarobki;
	
	public:
		Rodzic();
		Rodzic(bool, string, string, float);
		~Rodzic();
		void info();
		friend float operator+(Rodzic, Rodzic);
		
};

float operator+(Rodzic);

class Dziecko {
	
	string imie;
	int wiek, lZabawek;
	float *cena;
	static int fCount;
	
	public:
		Dziecko(const Dziecko& d);
		Dziecko();
		Dziecko(string, int, int, float*);
		~Dziecko();
		void setImie(string);
		void dodajZabawke(float);
		static void ileDzieci();
		friend float operator+(Dziecko, Dziecko);
	
};

float operator+(Dziecko, Dziecko);

#endif

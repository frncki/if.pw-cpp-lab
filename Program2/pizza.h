#ifndef _PIZZA_H
#define _PIZZA_H

#include <iostream>

using namespace std;

class pizza {
	
	float maka, drozdze, cukier, sol, oliwa, woda;
	int dodatki;
	
	public:
	float getMaka();
	float getDrozdze();
	float getCukier();
	float getSol();
	float getOliwa();
	float getWoda();
	int getDodatki();
	
	void setMaka(float x);
	void setDrozdze(float x);
	void setCukier(float x);
	void setSol (float x);
	void setOliwa(float x);
	void setWoda(float x);
	void setDodatki(int x);
	
	//friend void robListe(pizza &p, int nr, string *listaDodatkow);
};

class goscie {
	
	int guests;
	bool glodni;

	public:
	int getGuests();
	bool getGlodni();
	
	void setGuests(int x);
	void setGlodni(bool x);

	friend int ilePizzy(goscie &g);
};

int ilePizzy(goscie &g);
void robListe(pizza &p, int nr, string *listaDodatkow);

#endif

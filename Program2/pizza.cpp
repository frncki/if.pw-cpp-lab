#include "pizza.h"

using namespace std;

	float pizza::getMaka() {return maka;}
	float pizza::getDrozdze() {return drozdze;}
	float pizza::getCukier() {return cukier;}
	float pizza::getSol() {return sol;}
	float pizza::getOliwa() {return oliwa;}
	float pizza::getWoda() {return woda;}
	int pizza::getDodatki() {return dodatki;}
	
	void pizza::setMaka(float x) {maka = x;}
	void pizza::setDrozdze(float x) {drozdze = x;}
	void pizza::setCukier(float x) {cukier = x;}
	void pizza::setSol (float x) {sol = x;}
	void pizza::setOliwa(float x) {oliwa = x;}
	void pizza::setWoda(float x) {woda = x;}
	void pizza::setDodatki(int x) {dodatki = x;}
	
	int goscie::getGuests() {return guests;}
	bool goscie::getGlodni() {return glodni;}
	
	void goscie::setGuests(int x) {guests = x;}
	void goscie::setGlodni(bool x) {glodni = x;}

int ilePizzy(goscie &g) {

	int n;
	
	if (g.getGlodni() == true) {
		n = g.getGuests()*2;
	} else {
		n = g.getGuests();
	}

	return n;
}

void robListe(pizza &p, int nr, string *listaDodatkow) {
	
	cout << endl << "LISTA:" << endl;
	cout << "- " << p.getMaka()*nr << " dag maki," << endl;
	cout << "- " << p.getDrozdze()*nr << " dag drozdzy," << endl;
	cout << "- " << p.getCukier()*nr << " lyzeczek cukru," << endl;
	cout << "- " << p.getSol()*nr << " lyzeczek soli," << endl;
	cout << "- " << p.getOliwa()*nr << " dag maki," << endl;
	cout << "- " << p.getWoda()*nr << " szklanek wody," << endl;
	cout << "Dodatki: " << endl;
	for (int i = 0; i < p.getDodatki(); i++) {
		cout << "- " << listaDodatkow[i] << endl;
	}
	
}

#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

class Czastka {
	protected:
		string name;
		float q;
		double m;
	public:
		Czastka(string, float, double);
		~Czastka();
		virtual void info();
		double getM();
};

class Proton : public Czastka{
		float spin;
	public:
		Proton(string, float, double, float);
		~Proton();
		void info();
};

class Neutron : public Czastka{
		int nQ; // liczba kwarkow
	public:
		Neutron(string, float, double, int);
		~Neutron();
		void info();
};

#endif

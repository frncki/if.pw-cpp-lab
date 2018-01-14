#ifndef _BRYLY_H_
#define _BRYLY_H_

#include <iostream>
#include <cmath>

using namespace std;

class Punkt {

	float x, y;
	string name;

	public:
		Punkt(string, float, float);
		~Punkt();
		void print();
};

class Kula : public Punkt {

	float r;

	public:
		Kula(string, float, float, float);
		~Kula();
		void print();
};

class Szescian : public Punkt {

	float A;

	public:
		Szescian(string, float, float, float);
		~Szescian();
		void print();
};

#endif

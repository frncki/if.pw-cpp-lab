//Franciszek Mirecki KOLOKWIUM 1
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

using namespace std;

class Macierz;

class Wektor{

	static int lWektor;
	float x, y, z;

	public:
	Wektor();
	Wektor(float, float, float);
	Wektor(const Wektor&);
	~Wektor();
	void setX(float);
	void setY(float);
	void setZ(float);
	float getX();
	float getY();
	float getZ();
	static void ileWektor();
	friend Wektor operator-(Wektor, Wektor);
	friend class Macierz;
};

class Macierz{

	float **mac;

	public:
	Macierz();
	Macierz(float *[3]);
	~Macierz();
	void AddColumn(Wektor);
	friend ostream& operator<<(ostream&, Macierz&);
	friend class Wektor;
};

Wektor operator-(Wektor, Wektor);
ostream& operator<<(ostream&, Macierz&);

#endif

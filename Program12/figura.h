#ifndef _FIGURA_H_
#define _FIGURA_H_

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class Figura {

  public:
	Figura(){}
	~Figura(){}
	virtual double LiczPole(){return 0;}
};

class Trojkat : public Figura {
	double a, b, c;
  public:
	Trojkat(double A, double B, double C) {a = A; b = B; c = C;}
	~Trojkat() {}
	double LiczPole() {
		double p = 0.5*(a+b+c);
		return (sqrt(p*(p-a)*(p-b)*(p-c)));
	}
	double getH(double foo) {return (2*foo/a);}
};

class Kolo : public Trojkat {
	double r;
  public:
	Kolo(double a, double b, double c):Trojkat(a, b, c) {
		double alpha = acos((a*a+b*b-c*c)/(2*a*b));
		r = c/(2*sin(alpha));
	}
	~Kolo() {}
	double LiczPole() {return (M_PI*r*r);}
	double getR() {return r;}
};

#endif

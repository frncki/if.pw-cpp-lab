#ifndef _FIZYKA_H
#define _FIZYKA_H

#include <iostream>
#include <cmath>

using namespace std;

class Kulka {

	float mM, mAlpha, mV;
	public:
		Kulka();
		Kulka(float a,float b, float c);
		~Kulka();
		void Przedstaw();
		float getmM();
		float getmAlpha();
		float getmV();
};

class Ped {
	
	float mPx, mPy, mBeta, mMM;
	public:
		Ped();
		Ped(Kulka a, Kulka b);
		~Ped();
		float PredkoscKoncowa();
		void Przedstaw(float v_final);
};


#endif

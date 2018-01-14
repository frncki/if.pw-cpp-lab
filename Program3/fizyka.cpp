#include "fizyka.h"

using namespace std;

	Kulka::Kulka() {mM = 0.0; mAlpha = 0.0; mV = 0.0;};
	
	Kulka::Kulka(float a,float b, float c) {mM = a; mAlpha = b; mV = c;}
	
	Kulka::~Kulka() {};
	
	void Kulka::Przedstaw() {
		cout << endl << "Przedstawiam!" << endl;
		cout << "masa: " << mM << " kg" << endl;
		cout << "alpha: " << mAlpha << " rad" << endl;
		cout << "predkosc: " << mV << " m/s" << endl;
		}
		
	float Kulka::getmM() {return mM;}
	
	float Kulka::getmAlpha() {return mAlpha;}
	
	float Kulka::getmV() {return mV;}
	
	Ped::Ped() {mPx = 0.0; mPy = 0.0; mBeta = 0.0; mMM = 0.0;};
	
	Ped::Ped(Kulka a, Kulka b) {
		mPx = (cos(a.getmAlpha()) * a.getmV() * a.getmM() + cos(b.getmAlpha()) * b.getmV() * b.getmM());
		mPy = (sin(a.getmAlpha()) * a.getmV() * a.getmM() + sin(b.getmAlpha()) * b.getmV() * b.getmM());
		mBeta = (atan(mPx/mPy));
		mMM = a.getmM() + b.getmM();	
		}
		
	Ped::~Ped() {};
	
	float Ped::PredkoscKoncowa() {return (mPx/(mMM * cos(mBeta)));}
	
	void Ped::Przedstaw(float v_final) {
		cout << endl << "Przedstawiam Ped!" << endl;
		cout << "Px: " << mPx << " kg*m/s" << endl;
		cout << "Py: " << mPy << " kg*m/s" << endl;
		cout << "predkosc koncowa: " << v_final << " m/s" << endl;
		cout << "beta: " << mBeta << " rad" << endl;
		cout << "masa calkowita: " << mMM << " kg" << endl;
		}

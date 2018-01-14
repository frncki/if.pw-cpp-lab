#include <iostream>
#include <cmath>

using namespace std;

class Kulka {

	float mM, mAlpha, mV;
	public:
		Kulka() {mM = 0.0; mAlpha = 0.0; mV = 0.0;};
		Kulka(float a,float b, float c) {mM = a; mAlpha = b; mV = c;}
		~Kulka() {};
		void Przedstaw() {
			cout << endl << "Przedstawiam!" << endl;
			cout << "masa: " << mM << " kg" << endl;
			cout << "alpha: " << mAlpha << " rad" << endl;
			cout << "predkosc: " << mV << " m/s" << endl;
			}
		float getmM() {return mM;}
		float getmAlpha() {return mAlpha;}
		float getmV() {return mV;}
};

class Ped {
	
	float mPx, mPy, mBeta, mMM;
	public:
		Ped() {mPx = 0.0; mPy = 0.0; mBeta = 0.0; mMM = 0.0;};
		Ped(Kulka a, Kulka b) {
			mPx = (cos(a.getmAlpha()) * a.getmV() * a.getmM() + cos(b.getmAlpha()) * b.getmV() * b.getmM());
			mPy = (sin(a.getmAlpha()) * a.getmV() * a.getmM() + sin(b.getmAlpha()) * b.getmV() * b.getmM());
			mBeta = (atan(mPx/mPy));
			mMM = a.getmM() + b.getmM();	
		}
		~Ped() {};
		float PredkoscKoncowa() {return (mPx/(mMM * cos(mBeta)));}
		void Przedstaw(float v_final) {
			cout << endl << "Przedstawiam Ped!" << endl;
			cout << "Px: " << mPx << " kg*m/s" << endl;
			cout << "Py: " << mPy << " kg*m/s" << endl;
			cout << "predkosc koncowa: " << v_final << " m/s" << endl;
			cout << "beta: " << mBeta << " rad" << endl;
			cout << "masa calkowita: " << mMM << " kg" << endl;
			}
};

int main () {
	
	Kulka a(5.0, M_PI*0.25, 2);
	Kulka b(2.5, M_PI*0.5, 4);
	
	a.Przedstaw();
	b.Przedstaw();
	
	Ped p(a, b);
	p.Przedstaw(p.PredkoscKoncowa());
	
	return 0;
}

//Borys Pachocki & Franciszek Mirecki
#include "fizyka.h"

using namespace std;

int main () {
	
	Kulka a(5.0, M_PI*0.25, 2);
	Kulka b(2.5, M_PI*0.5, 4);
	
	a.Przedstaw();
	b.Przedstaw();
	
	Ped p(a, b);
	p.Przedstaw(p.PredkoscKoncowa());
	
	return 0;
}

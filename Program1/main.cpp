#include <iostream>
#include <cmath>
#include "header.h"

using namespace std;

int main () {

	int l;

	cout << "Podaj ile szczytow [ ;> ] chcesz wczytac: " << endl;
	cin >> l;

	Moutains m[l];
	float route;

	for (int i = 0; i < l; i++) {
		m[i].Insert();
		m[i].Print();
		route += m[i].CalculateRoute();
	}

	cout << endl << "Calkowita droga: " << route << endl;

	return 0;
}

#include "header.h"
#include <iostream>
#include <cmath>

using namespace std;

void Moutains::Insert() {
		
	cout << endl << "Podaj nazwe szczytu: " << endl;
	cin >> Name;
	cout << "Podaj wysokosc szczytu: " << endl;
	cin >> Height;
	cout << "Podaj lokacje szczytu: " << endl;
	cin >> Location;
	cout << "Podaj nachylenie szczytu: " << endl;
	cin >> Slope;
		
}
	
void Moutains::Print() {
	
	cout << endl << "Nazwa: " << Name << endl;
	cout << "Wysokosc: " << Height << endl;
	cout << "Lokacja: " << Location << endl;
	cout << "Nachylenie: " << Slope << " stopni" << endl;
		
}
	
float Moutains::CalculateRoute() {
			
	return (Height/sin(2*M_PI*Slope/360));
}

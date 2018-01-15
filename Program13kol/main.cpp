#include "header.h"

using namespace std;

int main () {

	srand(time(NULL));

	Proton p("Proton", 1, 1.007276, 0.5);
	Neutron n("Neutron", 0, 1.008664, 3);

	p.info();
	cout << endl;
	n.info();

	//izotop 1

	int z1 = (rand() % 4) + 90; //liczba atomowa 1
	int a1;//liczba masowa 1
	//int lN1;//liczba neutronow 1
	string izotop1;
	double Mz1; // masa izotopu1

	if (z1 == 90) {
		izotop1 = "Thorium";
		a1 = 232;
		//lN1 = a1 - z1;
		Mz1 = 232.0377;
	} else if (z1 == 91) {
		izotop1 = "Protactinum";
		a1 = 231;
		//lN1 = a1 - z1;
		Mz1 = 231.0359;
	} else if (z1 == 92) {
		izotop1 = "Uranium";
		a1 = 238;
		//lN1 = a1 - z1;
		Mz1 = 238.0289;
	} else if (z1 == 93) {
		izotop1 = "Neptunium";
		a1 = 237;
		//lN1 = a1 - z1;
		Mz1 = 237.048;
	} else if (z1 == 94) {
		izotop1 = "Plutonium";
		a1 = 244;
		//lN1 = a1 - z1;
		Mz1 = 244;
	}

	float dE1 = ((a1 - z1)*n.getM()+z1*p.getM()-Mz1); // energia wiazania 1

	//izotop 2
	int z2;
	do {
		z2 = (rand() % 4) + 90; //liczba atomowa 2
	} while (z2 == z1);
	int a2;//liczba masowa 2
	//int lN2;//liczba neutronow 2
	double Mz2; // masa izotopu 2
	string izotop2;

	if (z2 == 90) {
		izotop2 = "Thorium";
		a2 = 232;
		//lN2 = a2 - z2;
		Mz2 = 232.0377;
	} else if (z2 == 91) {
		izotop2 = "Protactinum";
		a2 = 231;
		//lN2 = a2 - z2;
		Mz2 = 231.0359;
	} else if (z2 == 92) {
		izotop2 = "Uranium";
		a2 = 238;
		//lN2 = a2 - z2;
		Mz2 = 238.0289;
	} else if (z2 == 93) {
		izotop2 = "Neptunium";
		a2 = 237;
		//lN2 = a2 - z2;
		Mz2 = 237.048;
	} else if (z2 == 94) {
		izotop2 = "Plutonium";
		a2 = 244;
		//lN2 = a2 - z2;
		Mz2 = 244;
	}

	double dE2 = ((a2 - z2)*n.getM()+z2*p.getM()-Mz2); // energia wiazania 2

	fstream file;

	file.open("energia_wiazania.txt");
	file.seekg(0, std::ios::end);
	if (file.good()) {
		cout << "(Uzyskano dostep do pliku!)" << endl << endl;
	} else {
		cout << "(Dostep do pliku zabroniony!)" << endl << endl;
	}
	file << izotop1 << endl << " Z: " << z1 << " energia wiazania: " << dE1 << "*c^2" << endl << endl;
	file << izotop2 << endl << " Z: " << z2 << " energia wiazania: " << dE2 << "*c^2" << endl << endl;
	cout << "Saved!" << endl;
	file.close();
	return 0;
}

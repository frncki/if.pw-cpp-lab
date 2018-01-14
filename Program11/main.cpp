#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main () {
	//czesc 1
	srand(time(NULL));
	cout << "Losujemy liczby funkcja rand:" << endl;
	for (int i = 1; i < 4; i++) {
		cout << i << ". " << rand() << endl;
	}
	cout << endl << endl;
	
	//czesc 2
	fstream plik;
	string name;
	int u = 1;
	int d = 2;
	int num, z; 
	int p = 0;
	bool gra = true;
	
	plik.open("wyniki.txt");
	plik.seekg(0, std::ios::end);
	if (plik.good()) {
		cout << "(Uzyskano dostep do pliku!)" << endl << endl;
	} else {
		cout << "(Dostep do pliku zabroniony!)" << endl << endl;
	}
	
	while (gra) {
		cout << "Prosze podac swoje imie:" << endl;
		cin >> name;
		cout << "Prosze podac dolna granice zakresu losowanej liczby:" << endl;
		cin >> d;
		cout << "Prosze podac gorna granice zakresu losowanej liczby:" << endl;
		cin >> u;
	
		num = (rand() % (u - d)) + d;
		while (z != num) {
			cout << "Zgaduj zgadula:" << endl;
			cin >> z;
			p++;
			if (z == num) {
				cout << "Brawo! Wygrana!" << endl << "Liczba prob: " << p << endl;
			} else if (z < d || z > u) {
				cout << "Liczba spoza zakresu!" << endl;
			} else if (z < num) {
				cout << "Podaj wieksza liczbe!" << endl;
			}	else if (z > num) {
				cout << "Podaj mniejsza liczbe!" << endl;
			}
		}
		
		plik << "Imie: " << name << endl << "Losowano z zakresu: " << d << " - " << u << endl << "Liczba prob: " << p << endl << endl;
		p = 0;
		cout << "Chcesz zagrac ponownie? [0/1]" << endl;
		cin >> gra;
		
	}
	
	plik.close();
	return 0;
}

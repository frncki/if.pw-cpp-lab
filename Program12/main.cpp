#include "figura.h"

using namespace std;

int main () {
	//fragment Programu10
	vector <int> v1;
	int nr;
	int tmp;
	int *tab;
	fstream plik;
	
	plik.open("liczby.txt");
	if (plik.good()) {
		cout << "Uzyskano dostep!" << endl;
	} else {
		cout << "Dostep zabroniony!" << endl;
	}
	
	plik >> nr;
	for (int i = 0; i < nr; i++) {
		plik >> tmp;
		v1.push_back(tmp);
	}
	plik.close();
	
	cout << "Przed sortowaniem:" << endl;
	for (int i = 0; i < nr; i++) {
		cout << v1[i] << " ";
	}
	
	tab = new int[nr];
	for (int i = 0; i < nr; i++) {
		tab[i] = v1[i];
	}
	
	sort(v1.begin(), v1.end());
	cout << endl << endl << "Po sortowaniu:" << endl;
	for (int i = 0; i < nr; i++) {
		cout << v1[i] << " ";
	}
	cout << endl << endl;
	
	//Program12
	cout << "Tutaj zaczyna sie program12! ;>" << endl;
	for (int i = 0; i < nr-3; i++) {

		double a = v1[i];
		double b = v1[i+1];
		double c = v1[i+2];

		if ((a+b) > c) {
			Trojkat t(a, b, c);
			Kolo k(a, b, c);

			cout << "H: " << t.getH(t.LiczPole()) << endl;
			cout << "R: " << k.getR() << endl;
			cout << "Pole trojkata: " << t.LiczPole() << endl;
			cout << "Pole kola opisanego na tym trojkacie: " << k.LiczPole() << endl;
			cout << endl;
		}
	}

  return 0;
}

























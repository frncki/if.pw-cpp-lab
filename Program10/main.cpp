#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

template <typename Tablica>

Tablica sort_up(Tablica *t) {
	int size = sizeof(t);
	size++;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			if (t[i] > t[i+1]) {
				swap(t[i], t[i+1]);
			}
		}
	}
	return *t;
}

int main () {
	
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
	for (int i = 0; i < nr; i ++) {
		cout << v1[i] << " ";
	}
	
	tab = new int[nr];
	for (int i = 0; i < nr; i ++) {
		tab[i] = v1[i];
	}
	
	sort(v1.begin(), v1.end());
	cout << endl << endl << "Po sortowaniu:" << endl;
	for (int i = 0; i < nr; i ++) {
		cout << v1[i] << " ";
	}
	
	sort_up(tab);
	
	cout << endl << endl << "Po sortowaniu sort_upem::" << endl;
	for (int i = 0; i < nr; i ++) {
		cout << tab[i] << " ";
	}
	cout << endl;
	
	return 0;
}

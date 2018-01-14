#ifndef _MUZYCY_H
#define _MUZYCY_H

#include <iostream>

using namespace std;

enum muzyk {Hetfield = 1, Podsiadlo, Dio, Grechuta};

class Rank {
	int rank;
	muzyk name;
	static int fCount;
	public:
		void info();
		void save(int r, muzyk n);
		void print();
		int getRank();
		muzyk getName();
		Rank();
		Rank(muzyk n);
		~Rank();
};

#endif

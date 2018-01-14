#ifndef rank_h
#define rank_h
#include <iostream>

using namespace std;

enum muzyk{Chupa, Kowalska, Jackson, Spears};

class Ranking
{
	static int ile;
	int miejsce;
	muzyk name;
public:
	void Info();
	void Save(int m, muzyk na);
	void Print();
	int GetMiejsce(){return miejsce;}
	Ranking();
	Ranking(muzyk Name);
	~Ranking();
};


#endif

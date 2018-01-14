#include "rank.h"

int Ranking::ile = 0;

Ranking::Ranking()
{
	ile++;
	miejsce = 1;
	name = Chupa; 
}

Ranking::Ranking(muzyk Name)
{
	ile++;
	miejsce = ile;
	name = Name;
}

Ranking::~Ranking()
{
	ile--;
	cout<< "Pozostało "<<ile<<" muzykow."<<endl;
}


void Ranking::Info()
{
	cout << "1. Chupa"<<endl;
	cout << "2. Kowalska"<<endl;
	cout << "3. Jackson"<<endl;
	cout << "4. Spears"<<endl;
}
void Ranking::Save(int m, muzyk na)
{
	miejsce = m;
	name = na;
}
void Ranking::Print()
{
	cout <<"Miejsce "<<miejsce<<endl;
	cout <<"Nazwisko :";
	if(name == 0) cout <<"Chupa"<<endl;
	if(name == 1) cout <<"Kowalska"<<endl;
	if(name == 2) cout <<"Jackson"<<endl;
	if(name == 3) cout <<"Spears"<<endl;
}	
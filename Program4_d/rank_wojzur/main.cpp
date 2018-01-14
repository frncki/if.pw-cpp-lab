#include "rank.h"

int main()
{

	Ranking * rank = new Ranking[4];{Ranking(), Ranking(Kowalska), Ranking(Jackson), Ranking(Spears);};
	for (int i=4;i>0;i--)
	{
		for(int j=0;j<4;j++)
		{
			if(i == rank[j].GetMiejsce()) rank[j].Print();
		}
	}
	delete [] rank ;
	int k;
	cin >> k;
	return 0;
}

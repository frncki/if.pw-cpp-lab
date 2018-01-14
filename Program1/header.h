#ifndef _HEADER_H
#define _HEADER_H

struct Moutains {

	char Name[20];
	double Height;
	char Location[20];
	float Slope;
	
	void Insert();
	void Print();
	float CalculateRoute();

};

#endif

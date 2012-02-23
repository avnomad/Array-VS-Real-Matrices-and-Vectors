#include <iostream>
using namespace std;

#include <Real Matrices and Vectors.h>
#include <iomanip>
#include <time.h>

using namespace ASL;

int main()
{
	Vector v,u;

	v = C/1/25000000;
	
	tic();
	u = sin(cos(sin(v)));
	toc();

	

	system("PAUSE");
	return 0;
} // end fuction main

/*
	v = linspace(1,4,4);
	A = hilb(5000);

	tic();
	A = polyval(v,A);
	toc();

	532ms optimized vs 723ms matlab		passing to library offers 26.4% reduction of computation time.
*/
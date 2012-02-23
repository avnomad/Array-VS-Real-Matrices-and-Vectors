// Array VS Real Matrices and Vectors.cpp : main project file.

#include "stdafx.h"
using std::cout;
using std::endl;
using std::system;

using namespace ASL;
using namespace ASL::DataStructures;


double (*sinp)(double) = sin;
double (*cosp)(double) = cos;

double add1(double x)
{
	return 1+x;
}


int main(array<System::String ^> ^args)
{
	System::Console::ForegroundColor = System::ConsoleColor::Green;

	Array<double> A(25000000); 
	Array<double> B;

	A = add1;
	cout<<A.length()<<endl;
	tic();
	B = A.mapped(sinp).map(cosp).map(sinp);
	toc();

	Vector v,u;

	v = C/1/25000000;
	cout<<length(v)<<endl;
	tic();
	u = sin(cos(sin(v)));
	toc();

	system("PAUSE");
    return 0;
}

// Array VS Real Matrices and Vectors.cpp : main project file.

#include "stdafx.h"

using namespace System;
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#include <fstream>
using std::ofstream;

#include <cstdlib>
#include <math.h>


using namespace ASL::DataStructures;
using namespace ASL;


double (*sinp)(double) = sin;
double (*cosp)(double) = cos;

double add1(double x)
{
	return 1+x;
}


int main(array<System::String ^> ^args)
{
	Console::ForegroundColor = System::ConsoleColor::Green;

	/*ASL::DataStructures::Array<double> A(25000000); 
	ASL::DataStructures::Array<double> B;

	A = add1;
	cout<<A.length()<<endl;
	tic();
	B = A.mapped(sinp).map(cosp).map(sinp);
	toc();*/

	ASL::Vector v,u;

	v = ASL::C/1/25000000;
	cout<<length(v)<<endl;
	tic();
	u = sin(cos(sin(v)));
	toc();

	system("PAUSE");
    return 0;
}

#include <iostream>
using std::cout;
using std::endl;

#include <Real Matrices and Vectors.h>
#include <Array/Array.h>

using namespace ASL;
using namespace ASL::DataStructures;


double (*sinp)(double) = sin;
double (*cosp)(double) = cos;

double add1(double x)
{
	return 1+x;
}


int main()
{
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
} // end fuction main
//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
/*
 *	This file is part of Array VS Real Matrices and Vectors.
 *
 *	Array VS Real Matrices and Vectors is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	Array VS Real Matrices and Vectors is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with Array VS Real Matrices and Vectors.  If not, see <http://www.gnu.org/licenses/>.
 */

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

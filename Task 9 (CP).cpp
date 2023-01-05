#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int a;
	int b;
	int c;
	float X;
	float Y;
	float Square;
	float squareRoot;
	cout  <<  "Value of A is ";
	cin  >>  a;
	cout  <<  "Value of B is ";
	cin  >>  b;
	cout  <<  "Value of C is ";
	cin  >>  c;
	Square = b * b ;
	Y = Square - (4 * a * c);
	squareRoot = sqrt(Y);
	X = (-b + squareRoot)/(2*a);
	cout  <<  "x = "  <<  X  <<  " or ";
	X = (-b - squareRoot)/(2*a);
	cout  <<  "x = "  <<  X  <<  endl;
}
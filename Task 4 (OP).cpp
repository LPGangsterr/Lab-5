#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int number1;
	int number2;
	int Minimum;
	cout  <<  "Enter 1st number:";
	cin  >>  number1;
	cout  <<  "Enter 2nd number:";
	cin  >>  number2;
	Minimum = min(number1,number2);
	cout  <<  "Minimum number is "  <<  Minimum  <<  ".";
}
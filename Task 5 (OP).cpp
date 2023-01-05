#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int number1;
	int number2;
	int Power;
	cout  <<  "Enter 1st number:";
	cin  >>  number1;
	cout  <<  "Enter 2nd number:";
	cin  >>  number2;
	Power = pow(number1,number2);
	cout  <<  "Power of given number is "  <<  Power  <<  ".";
}

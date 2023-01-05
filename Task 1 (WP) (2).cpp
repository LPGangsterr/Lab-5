#include <iostream>
using namespace std;
int Return(int number);
main()
{
	int number;
	number = Return(number);
	cout  <<  "Your number is "  <<  number  <<  "."  <<  endl;
}
int Return(int number)
{
	cout  <<  "Enter any number: ";
	cin  >>  number;
	number = number * 5;
	return number;
}
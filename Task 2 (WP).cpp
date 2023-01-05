#include <iostream>
#include <windows.h>
using namespace std;
main()
{
	int number1;
	int number2;
	int sum;
	cout  <<  "Enter 1st number:";
	cin  >>  number1;
	cout  <<  "Enter 2nd number:";
	cin  >>  number2;
	Sleep(200);
	sum = number1 + number2;
	cout  <<  "Your sum is "  <<  sum  <<  ".";
}

#include <iostream>
using namespace std;
main()
{
	int number;
	int sum;
	int positions;
	int position1;
	int position2;
	int position3;
	int position4;
	int position5;
	cout  <<  "Enter five digit numbers: ";
	cin  >>  number;
	position1 = number%10;
	position2 = number%10;
	position3 = number%10;
	position4 = number%10;
	position5 = number%10;
	sum =   position1  +  position2  +  position3  +  position4  +  position5;
if(sum%2  ==  0)
	{
		cout  <<  "The given number is Evenish"  <<  ".";
	}
if(sum%2  !=  0)
	{
		cout  <<  "The given number is Oddish"  <<  ".";
	}
}

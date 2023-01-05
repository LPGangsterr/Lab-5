#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight(float base,float angle);
main()
{
	float base;
	float angle;
	cout  <<  "Enter base: ";
	cin  >>  base;
	cout  <<  "Enter angle: ";
	cin  >>  angle;
	calculateHeight(base,angle);
}
float calculateHeight(float base,float angle)
{
	float radian = 57.2958;
	float degree;
	float tangent;
	float height;
	degree = angle/radian;
	tangent = tan(degree);
	height = tangent * base;
	cout  <<  "The height of the tree is "  <<  height  <<  "." <<  endl;
}
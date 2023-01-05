#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

bool isSymmetry(int num);



main(){
	bool symmetry;
	system("cls");
	int num;
	
	cout<<"Enter a three digit number: ";
	cin>>num;
	symmetry = isSymmetry(num);

	if(symmetry == true){
	cout<<"It is a symmetrical number.";
	}
	if(symmetry == false){
	cout<<"It is not a symmetrical number.";
	}
	}
bool isSymmetry(int num){
		
	int p1,p2,p3;

	p1=num%10;
	p2=(num/10)%10;
	p3=(num/100)%10;
	if(p1==p3){
	return true;
	}
	if(p1!=p3){
	return false;
	}
}

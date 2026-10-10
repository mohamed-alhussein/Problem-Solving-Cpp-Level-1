//Problem #48:My Floor 
/*
Write a program tp print floor of numbers , don't use build in floor function .
*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
float ReadNumber() {
	float  Number = 0;
	cout << "Please enter a Number ?" << endl;
	cin >> Number;
	return Number;
}
int MyFloor(float Number) {
	int IntPart = Number;
	if (Number > 0)
		return IntPart;
	else
		return --IntPart;
}
int main() {
	float Number = ReadNumber();
	cout << "My Floor Result is :" << MyFloor(Number) << endl;
	cout << "C++ Floor Result is :" << floor(Number) << endl;
	return 0;
}

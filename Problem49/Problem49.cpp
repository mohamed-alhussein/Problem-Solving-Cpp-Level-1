//Problem #49:My Ceil 
/*
Write a program to print ceil numbers, don't use built in ceil function
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float  ReadNumber() {
	float Number = 0;
	cout << "Please enter a number ?" << endl;
	cin >> Number;
	return Number;
}
float GetFractionPart(float Number) {
	return Number - (int)Number;
}
int MyCeil(float Number) {
	int IntPart = Number;
	if (abs(GetFractionPart(Number)) > 0)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return IntPart;
	}
	else
		return IntPart;
}
int main() {
	float Number = ReadNumber();
	cout << "My Ceil Result is :" << MyCeil(Number) << endl;
	cout << "C++ Ceil Result is :" << ceil(Number) << endl;
	return 0;

}

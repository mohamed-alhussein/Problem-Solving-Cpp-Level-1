//Problem #47: My Round 
/*
Write a program to print round of numbers , don't use build in round founction
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumber() {
	int Number = 0;
	cout << "Please enter  float number ?" << endl;
	cin >> Number;
	return Number;
}
float GetFractionPart(float Number) {
	return Number - (int)Number;
}
int MyRound(float Number) {
	int intPart = (int)Number;
	float Fraction = GetFractionPart(Number);
	if (abs(Fraction) >= .5)
	{
		if (Number > 0)
			return 	++intPart;
		else
			return 	--intPart;
	}
	else
	{
		return intPart;
	}
}
int main() {
	float Number = ReadNumber();
	cout << "My Round Result is :" << MyRound(Number) << endl;
	cout << "C++ Round Result is :" << round(Number) << endl;
	return 0;
}

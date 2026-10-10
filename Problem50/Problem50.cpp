//Problem #50:MySqrt 
/*
Write a program to print sqrt of numbers , don't use built in sqrt function

Output:
Please enter a number ?
16
My Sqrt Result is :4
C++ Sqrt Result is :4
*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
float ReadNumber() {
	float Number = 0;
	cout << "Please enter a number ?" << endl;
	cin >> Number;
	return Number;
}
float MySqrt(float Number) {
	return pow(Number, 0.5);
}

int main() {
	float Number = ReadNumber();
	cout << "My Sqrt Result is :" << MySqrt(Number) << endl;
	cout << "C++ Sqrt Result is :" << sqrt(Number) << endl;
	return 0;
}

//Problem 46:My abs 
/*
Write a program to print abs of numbers , donot use bulid in abs function
*/

#include<iostream>
#include<string>
using namespace std;
float ReadNumber() {
	int Number = 0;
	cout << "Please enter a number ?" << endl;
	cin >> Number;
	return Number;
}

float MyABC(int Number) {
	if (Number < 0)
		return Number * -1;
	else
		return Number;
}
int main() {
	float Number = ReadNumber();
	cout << "My abs  result is :" << MyABC(Number) << endl;
	cout << "C++ abs result is :" << abs(Number) << endl;

}

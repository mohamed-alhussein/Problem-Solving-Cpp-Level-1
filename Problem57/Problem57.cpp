//Problem 57:Half Number
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumber() {
	float num = 0;
	cout << "Please enter a number ?" << endl;
	cin >> num;
	return num;
}

float GetHalfNumber(int number) {
	float HalfNumber = 0;
	HalfNumber = (float)number / 2;
	return HalfNumber;
}

void PrintHalfNumber(int number) {
	string Result = "Half of " + to_string(number) + " is :" + to_string(GetHalfNumber(number));
	cout << Result << endl;
}

int main() {
	PrintHalfNumber(ReadNumber());
	return 0;
}


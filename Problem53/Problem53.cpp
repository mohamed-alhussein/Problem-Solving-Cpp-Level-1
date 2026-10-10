//Problem 53:Read Number and check if even or odd
/*
Please enter a number  to check if (Even/Odd)?
5
The Number id Odd
------------------------------------
Please enter a number  to check if (Even/Odd)?
4
The Number is Even

*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum EnTypeNumber { Even = 1, Odd = 2 };
int ReadNumber() {
	int number = 0;
	cout << "Please enter a number  to check if (Even/Odd)?" << endl;
	cin >> number;
	return number;
}
EnTypeNumber CheckTypeNumber(int number) {
	int Result = number % 2;
	if (Result == 0)
		return EnTypeNumber::Even;
	else
		return EnTypeNumber::Odd;
}
void PrintNumberType(EnTypeNumber typeNumber) {
	if (typeNumber == EnTypeNumber::Even)
		cout << "The Number is Even" << endl;
	else
		cout << "The Number id Odd" << endl;
}
int main() {
	int Number = ReadNumber();
	PrintNumberType(CheckTypeNumber(Number));
	return 0;
}

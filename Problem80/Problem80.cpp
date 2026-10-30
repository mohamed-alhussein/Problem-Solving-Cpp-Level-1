//Problem 80:Factorial  of N !
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadPositiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}
int FactorialNumber(int Number) {
	int F = 1;
	for (int i = Number; i >= 1; i--)
	{
		F = F * i;
	}
	return F;
}

int main() {
	cout << FactorialNumber(ReadPositiveNumber("Enter N ?"));
	return 0;
}




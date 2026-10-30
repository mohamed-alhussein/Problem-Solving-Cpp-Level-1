//Problem 77:Print Numbers From N to 1
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumber() {
	int Number;
	cout << "Please enter a number  ?" << endl;
	cin >> Number;
	return Number;
}
void PrintRangFromNTo1_UsingFor(int Number) {
	cout << "Range Numbers using For Statment :" << endl;
	for (int i = Number; i >= 1; i--)
	{
		cout << i << endl;
	}
}

void PrintRangFromNTo1_UsingWhile(int Number) {
	int i = Number+1;
	cout << "Range Numbers using While Statment :" << endl;
	while (i>1)
	{
		i--;
		cout << i << endl;

	}
}

void PrintRangFromNTo1_UsingDoWhile(int Number) {
	cout << "Range Numbers using Do While Statment :" << endl;

	int i = Number+1;
	do
	{
		i--;
		cout << i << endl;

	} while (i>1);
}
int main() {
	int Number = ReadNumber();
	PrintRangFromNTo1_UsingFor(Number);
	PrintRangFromNTo1_UsingWhile(Number);
	PrintRangFromNTo1_UsingDoWhile(Number);
	return 0;
}


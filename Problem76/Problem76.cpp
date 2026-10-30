//Problem 76: Print Numbers from 1 to n
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumber() {
	int number = 0;
	cout << "Please enter a number ?" << endl;
	cin >> number;
	return number;
}
void PrintRangeNumbersFrom1TON_UsingWhile(int number) {
	cout << "Range Printed using while statment :" << endl;
	int i = 0;
	while (i<number){
		i++;
		cout << i << endl;
	}
}

void PrintRangeNumbersFrom1TON_UsingFor(int number) {
	cout << "Range Printed using For statment :" << endl;
	for (int i = 1; i <=number; i++)
	{
		cout << i << endl;
	}
}

void PrintRangeNumbersFrom1TON_UsingDoWhile(int number) {
	int i = 0;
	cout << "Range Printed using do while statment :" << endl;
	do
	{
		i++;
		cout << i << endl;

	} while (i<number);
}
int main() {
	int number = ReadNumber();
	PrintRangeNumbersFrom1TON_UsingDoWhile(number);
	PrintRangeNumbersFrom1TON_UsingFor(number);
	PrintRangeNumbersFrom1TON_UsingWhile(number);
	return 0;
}
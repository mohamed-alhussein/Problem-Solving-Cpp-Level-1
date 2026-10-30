//Problem 78:Sum Odd Numbers From 1 To N ?
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum EnEvenOrOdd{even=1,odd};
int ReadNumber() {
	int Number=0;
	cout << "Please enter a Number in Range ?" << endl;
	cin >> Number;
	return Number;
}

EnEvenOrOdd CheckEvenOrOdd(int Number) {
	if (Number % 2 == 0)
		return EnEvenOrOdd::even;
	else
		return EnEvenOrOdd::odd;
}

void PrintSumNumber_UsingFor(int Number) {
	int Sum = 0;
	cout << "Sum Odd Numbers Using For Statment: " << endl;
	for (int i = 1; i <=Number; i++)
	{
		if (CheckEvenOrOdd(i) == EnEvenOrOdd::odd) {
			Sum += i;
		}

	}
	cout << "Sum =" << Sum << endl;
}

void PrintSumNumber_Usingwhile(int Number) {
	int i = 0;
	int Sum = 0;
	cout << "Sum Odd Numbers Using While Statment: " << endl;
	while (Number>i)
	{
		i++;
		if (CheckEvenOrOdd(i)==EnEvenOrOdd::odd)
		{
			Sum += i;
		}
	}
	cout <<"Sum =" <<Sum<< endl;
}

void PrintSumNumber_UsingDowhile(int Number) {
	int i = 0;
	int Sum =0;
	cout << "Sum Odd Numbers Using Do While Statment: " << endl;
	do
	{
		i++;
		if (CheckEvenOrOdd(i)==EnEvenOrOdd::odd)
		{
			Sum += i;
		}

	} while (Number>i);
	cout << "Sum= " << Sum << endl;
}
int main() {
	int Number = ReadNumber();
	PrintSumNumber_UsingFor(Number);
	PrintSumNumber_Usingwhile(Number);
	PrintSumNumber_UsingDowhile(Number);
	return 0;
}

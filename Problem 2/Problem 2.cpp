//Problem #2: Print All Numbers Prime From 1 To N .
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
enum EnPrimNotPrime{Prime=1,NotPrime=2};
int ReadPositiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<=0);
	return Number;
 }

EnPrimNotPrime CheckPrime(int Number) {
	int M = round(Number / 2);
	for (int i = 2; i <=M; i++)
	{
		if (Number % i == 0)
			return EnPrimNotPrime::NotPrime;
	}
	return EnPrimNotPrime::Prime;
}

void PrintAllNumbersFrom1ToN(int Number) {
	cout << "Numbers Prime from 1 to " << Number << "  are :" << endl;
	for (int i = 1; i <=Number; i++)
	{
		if (CheckPrime(i)==EnPrimNotPrime::Prime)
		{
			cout<<"i=" << i << endl;
		}
	}
}
int main() {
	int Number = ReadPositiveNumber("Please enter a positive Number ?");
	PrintAllNumbersFrom1ToN(Number);
	return 0;
}



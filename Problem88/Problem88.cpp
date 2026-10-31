//Problem 88:Prime Number and Not Prime ...
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum EnPrimeNotPrime {Prime=1,NotPrime=2};
float ReadPositiveNumber(string Message) {
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<=0);
	return Number;
}
EnPrimeNotPrime ChackPrime(int Number) {
	int M = round(Number / 2);
	for (int i = 2; i <=M; i++)
	{
		if (Number % i == 0)
			return EnPrimeNotPrime::NotPrime;
	}
	return EnPrimeNotPrime::Prime;
}
void PrintNumberType(int Number) {
	switch (ChackPrime(Number))
	{
	case EnPrimeNotPrime::Prime:
		cout << "The Number is Prime " << endl;
		break;
	case EnPrimeNotPrime::NotPrime:
		cout << "The Number is Not Prime " << endl;
		break;
	}
}

int main() {
	PrintNumberType(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}


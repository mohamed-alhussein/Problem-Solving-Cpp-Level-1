//Problem 82:Power of M
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadPositveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number<0);
	return Number;
}
int Power_OF_M(int Number, int M) {
	if (M == 0)
		return 1;
	int P = 1;
	for (int i = 1; i <=M; i++)
	{
		P = P * Number;
	}
	return P;
}
int main() {
	int Number = ReadPositveNumber("Please enter the number ?");
	int M = ReadPositveNumber("Please enter the power ?");
	cout << "Power of " << M << " is :" << Power_OF_M(Number, M);
	return 0;
}


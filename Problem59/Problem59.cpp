//Problem 59:Sum  three numbers...
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadThreeNumber(int& num1, int& num2, int& num3)
{
	cout << "Please enter number 1 ?" << endl;
	cin >> num1;
	cout << "Please enter number 2 ?" << endl;
	cin >> num2;
	cout << "Please enter number 3 ?" << endl;
	cin >> num3;
}

int SumNumber(int num1, int num2, int num3) {
	return (num1 + num2 + num3);
}

void PrintSum(int sum) {
	cout << "Sum is :" << sum << endl;
}

int main() {
	int num1, num2, num3;
	ReadThreeNumber(num1, num2, num3);
	PrintSum(SumNumber(num1, num2, num3));
	return 0;
}


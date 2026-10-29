//Problem 63:Max Three Numbers
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

int MaxOf3Number(int num1, int num2, int num3) {
	if (num1>num2)
	{
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if (num2 > num3)
			return num2;
		else
			return num3;
	}
}
void PrintMaxNumbers(int Max) {
	cout << "The Number Of Max Is :" << Max << endl;
}
int main() {
	int num1, num2, num3;
	ReadThreeNumber(num1, num2, num3);
	PrintMaxNumbers(MaxOf3Number(num1, num2, num3));
	return 0;
}


//Problem 64:Swap Two Number
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadTowNumbers(int& Num1, int& Num2) {
	cout << "Please enter number 1 ?" << endl;
	cin >> Num1;
	cout << "Please enter number 2 ?" << endl;
	cin >> Num2;
}
void SwapNumber(int& Num1, int& Num2) {
	int T = Num1;
	Num1 = Num2;
	Num2 = T;
}

int PrintNumber(int Num1, int Num2) {
	cout << "Number 1 is :" << Num1 << endl;
	cout << "Number 2 is :" << Num2 << endl;
}
int main() {
	int Num1, Num2;
	ReadTowNumbers(Num1, Num2);
	PrintNumber(Num1, Num2);
	swap(Num1, Num2);
	PrintNumber(Num1, Num2);
	return 0;
}


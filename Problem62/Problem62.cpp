//Problem 62:Max Of Tow Numbers
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

int MaxNumber(int Num1,int Num2) {
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintMaxNumber(int Max) {
	cout << "The Number of Max is :" << Max << endl;
}
int main() {
	int Num1, Num2;
	ReadTowNumbers(Num1, Num2);
	PrintMaxNumber(MaxNumber(Num1, Num2));
	return 0;
}

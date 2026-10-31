//Problem 81:Power of 2,3,4
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumber() {
	int Number = 0;
	cout << "Please enter a number ?" << endl;
	cin >> Number;
	return Number;
}
void PowerNumberOf2_3_4(int Number) {
	cout << "Power of 2 is :" << pow(Number, 2) << endl;
	cout << "Power of 3 is :" << pow(Number, 3) << endl;
	cout << "Power of 4 is :" << pow(Number, 4) << endl;
}
int main() {
	int Number = ReadNumber();
	PowerNumberOf2_3_4(Number);
	return 0;
}

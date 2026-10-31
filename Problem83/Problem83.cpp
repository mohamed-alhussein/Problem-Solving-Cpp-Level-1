//Problem 83:Grade A,B,C,D,E,F
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumberInRang(int From, int To) {
	int Number;
	do
	{
		cout << "Please Enter a Gread Between 0 and 100 ?" << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	return Number;
}
char GetLetterGread(int Gread) {
	if (Gread >= 90)
		return 'A';
	else if (Gread >= 80)
		return 'B';
	else if (Gread >= 70)
		return 'C';
	else if (Gread >= 60)
		return 'D';
	else if (Gread >= 50)
		return 'E';
	else
		return 'F';
}
int main() {
	cout << "Result is :" << GetLetterGread(ReadNumberInRang(0, 100));
	return 0;
}

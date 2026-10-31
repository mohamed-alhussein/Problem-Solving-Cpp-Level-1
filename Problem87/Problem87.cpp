//Problem 87:Sum Untile -99
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumber(string message) {
	int Number = 0;
	cout << message << endl;
	cin >> Number;
	return Number;
}

int ClculateSum() {
	int Number = 0, Sum = 0, Conter = 1;
	do
	{
		Number = ReadNumber("Please enter the Number " + to_string(Conter));
		if (Number==-99)
		{
			break;
		}
		Sum += Number;
		Conter++;

	} while (Number!=-99);
	return Sum;
}

int main() {
	cout << "Result =" << ClculateSum() << endl;
	return 0;
}


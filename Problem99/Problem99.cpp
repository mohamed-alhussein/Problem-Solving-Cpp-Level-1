//Problem 99:ATM PIN Code+
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
string ReadPinCode() {
	string Pin;
	cout << "Please enter Pin Code ?" << endl;
	cin >> Pin;
	return Pin;
}
bool Login() {
	string PinCode;
	do
	{
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1;

		}
		else
		{
			system("color 4F");
			cout << "Wrong PIN " << endl;
		}

	} while (PinCode!="1234");
}
int main() {

	if (Login())
	{
		system("color 6F");
		cout << "Your Account Balance is 7500 " << endl;
	}

	return 0;
}


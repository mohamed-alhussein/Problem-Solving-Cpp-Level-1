//Problem#100:ATM PIN 3 Times 
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
using namespace std;
string ReadPinCode() {
	string PinCode;
	cout << "Please enter Pin Code " << endl;
	cin >> PinCode;
	return PinCode;
}

bool Login() {
	int Conter = 3;
	string PinCode;
	do
	{
	Conter--;
	PinCode = ReadPinCode();
	if (PinCode="1234")
	{
		return 1;
	}
	else
	{
		system("color 4F");
		cout << "Wrong Pin ,you have " << Conter << " tray Pin " << endl;

	}
	} while (Conter>=1&&PinCode!="1234");
	return 0;
}
int main() {
	if (Login())
	{
		system("color 6F");
		cout << "Your account balnce is " << 7500 << endl;
	}
	return 0;
}


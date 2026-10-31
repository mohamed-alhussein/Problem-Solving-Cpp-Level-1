//Problem 89:Enter TotalBill And CashBad then return Remender 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float ReadPositiveNumber(string Message) {
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<=0);
	return Number;
}
float ClculateRemender(float TotalBill, float TotalCashPaid) {
	return TotalCashPaid - TotalBill;
}
int main() {
	float TotalBill = ReadPositiveNumber("Please enter total bill ?");
	float TotalCashPaid = ReadPositiveNumber("Please enter total cash paid ?");
	cout << "Total bill is :" << TotalBill << endl;
	cout << "Total Cash Paid is :" << TotalCashPaid << endl;
	cout << "***********************************" << endl;
	cout << "Remender is :" << ClculateRemender(TotalBill, TotalCashPaid) << endl;
	return 0;
}

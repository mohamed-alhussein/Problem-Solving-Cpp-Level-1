//Problem 90:Service Frr and Sales Tax
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float ReadPositiveNumnber(string Message){
	float Nummber = 0;
	do
	{
		cout << Message << endl;
		cin >> Nummber;
	} while (Nummber <= 0);
	return Nummber;
}
float TotalBillAfterServeceAndTasx(float TotalBill) {
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}
int main() {
	float TotalBill=ReadPositiveNumnber("Please enter total bill ?");
	cout << "Total Bill =" << TotalBill << endl;
	cout << "Total Bill After Service Fee and Tax = " << TotalBillAfterServeceAndTasx(TotalBill) << endl;
	return 0;
}


//problem 97:Loan installment Month
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

float TotalMonths(float LoanAmount, float MonthlyPayment) {
	return (LoanAmount / MonthlyPayment);
}
int main() {
	float LoanAmount = ReadPositiveNumber("Please enter LoanAmount ?");
	float MonthlyPaymnt = ReadPositiveNumber("Please enter MonthlyPayment ?");
	cout << "Total Months :" << TotalMonths(LoanAmount, MonthlyPaymnt);
	return 0;
}


//Problem 98:Monthly Loan Installment
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

	} while (Number <= 0);
	return Number;
}

float CalculateMonthlyInstallmentAmount(float LoanAmount, float TotalMonths) {
	return (LoanAmount / TotalMonths);
}
int main() {
	float LoanAmount = ReadPositiveNumber("Please enter Loan Amount ?");
	float TotalMonths = ReadPositiveNumber("Please enter Total Months ");
	cout << "Monthly Installment Amount :" << CalculateMonthlyInstallmentAmount(LoanAmount, TotalMonths) << endl;
	return 0;

}


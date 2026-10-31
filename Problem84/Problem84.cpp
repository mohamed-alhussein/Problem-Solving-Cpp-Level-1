//Problem 84:Commission percentage 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadTotalSales() {
	int TotalSales = 0;
	cout << "Please enter a Total Sales ?" << endl;
	cin >> TotalSales;
	return TotalSales;
}

float GetComisionPersantege(int TotalSales) {
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else
		return 0.0;
}
float CalculateTotalComision(int TotalSales) {
	return TotalSales * GetComisionPersantege(TotalSales);
}
int main() {
	int TotalSales = ReadTotalSales();
	cout << endl << " Comision  Persantege =" << GetComisionPersantege(TotalSales) << endl;
	cout << "total Commisione =" << CalculateTotalComision(TotalSales) << endl;
	return 0;
}


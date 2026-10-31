/ Problem 85:Piggy bank calculator
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct StPiggyBanckContent
{
	int Penney;
	int Nickle;
	int Dime;
	int Quarter;
	int Dolar;
};

StPiggyBanckContent ReadPiggyBanckContent() {
	StPiggyBanckContent PiggyBanckContent;
	cout << "Please enter Penneys ?" << endl;
	cin >> PiggyBanckContent.Penney;
	cout << "Please enter Nickel ?" << endl;
	cin >> PiggyBanckContent.Nickle;
	cout << "Please enter Dime ?" << endl;
	cin >> PiggyBanckContent.Dime;
	cout << "Please enter Quarter ?" << endl;
	cin >> PiggyBanckContent.Quarter;
	cout << "Please enter Dolar ?" << endl;
	cin >> PiggyBanckContent.Dolar;
	return PiggyBanckContent;
}
int CalculateTotalPenneys(StPiggyBanckContent PiggyBanckContent) {
	int TotalPenneys = PiggyBanckContent.Penney * 1 + 5 * PiggyBanckContent.Nickle + 10 * PiggyBanckContent.Dime + 25 * PiggyBanckContent.Quarter + 100 * PiggyBanckContent.Dolar;
	return TotalPenneys;
}

int main() {
	int TotalPennys = CalculateTotalPenneys(ReadPiggyBanckContent());
	cout<<endl << "Total Pennys is :" << TotalPennys << endl;
	cout << endl << "Total Dolars is " << (float)TotalPennys / 100 << endl;
	return 0;
	}
//Problem 95:Month Of Year
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum EnMothOfYear{Jan=1,Feb=2,Mar=3,Apr=4,May=5,June=6,July=7,August=8,September=9,October=10,Novmber=11,December=12};
int ReadNumberInRang(string Message, int From, int To) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	return Number;
}

EnMothOfYear ReadMothOfYear() {
	int T = ReadNumberInRang("Please enter month of year Jan=1,Feb=2,Mar=3,Apr=4,May=5,June=6,July=7,August=8,September=9,October=10,Novmber=11,December=12", 1, 12);
	return (EnMothOfYear)T;
}
string GetMothOfWeek(EnMothOfYear Month) {
	switch (Month)
	{
	case EnMothOfYear::Jan:
		return "January";
	case EnMothOfYear::Feb:
		return "February";
	case EnMothOfYear::Mar:
		return "March";
	case EnMothOfYear::Apr:
		return "April";
	case EnMothOfYear::May:
		return "May";
	case EnMothOfYear::June:
		return "June";
	case EnMothOfYear::July:
		return "July";
	case EnMothOfYear::August:
		return "August";
	case EnMothOfYear::September:
		return "September";
	case EnMothOfYear::October:
		return "October";
	case EnMothOfYear::Novmber:
		return "Novmber";
	case EnMothOfYear::December:
		return "December";
	default:
		return "Wrong Month ";
	}
}

int main() {
	cout << GetMothOfWeek(ReadMothOfYear());
	return 0;
}


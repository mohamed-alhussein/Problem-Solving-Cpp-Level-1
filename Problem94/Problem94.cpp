//Problem 94:Day Of Week
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum EnDayOfWeek{Sat=1,Sun=2,Mon=3,Tue=4,Wed=5,Thu=6,Fri=7};
int ReadNumberInRang(string Message,int From, int To) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<From ||Number>To);
	return Number;
}
EnDayOfWeek ReadDayOfWeek() {
	int T = ReadNumberInRang("Plase enter Day Number Sat=1,Sun=2,Mon=3,Tue=4,Wed=5,Thu=6,Fri=7 ?", 1, 7);
	return (EnDayOfWeek)T;
}
string GetDayOfWeek(EnDayOfWeek dayOfweek) {
	switch (dayOfweek)
	{
	case EnDayOfWeek::Sat:
		return "Satarday";
	case EnDayOfWeek::Sun:
		return "Sunday";
	case EnDayOfWeek::Mon:
		return "Monday";
	case EnDayOfWeek::Tue:
		return "Tusday";
	case EnDayOfWeek::Wed:
		return "Wednsday";
	case EnDayOfWeek::Thu:
		return "Thursday";
	case EnDayOfWeek::Fri:
		return "Friday";
		default:
		return "Not a valid day ";
	}
}
int main() {
	cout << GetDayOfWeek(ReadDayOfWeek());
	return 0;
}


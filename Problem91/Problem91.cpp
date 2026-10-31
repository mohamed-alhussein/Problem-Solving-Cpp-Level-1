// Problem 91:Enter Number of hours then print number of days and number of weeks
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
float HoursToDays(float NumberOfHours) {
	return NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours) {
	return NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays) {
	return NumberOfDays / 7;
}
int main() {
	float NumberOfHours = ReadPositiveNumber("Please enter numbers of hours ?");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfweeks = DaysToWeeks(NumberOfDays);
	cout << "***************************" << endl;
	cout << "Number  of hours :" << NumberOfHours << endl;
	cout << "Number of days :" << NumberOfDays << endl;
	cout << "Number ofweeks :" << NumberOfweeks << endl;
	return 0;
}


//Problem 93:Secounds to Days Hours Minutes Secounds
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct StTaskDuration
{
	int NumberofDays, NumberOfHours, NumberOfMuntis, NumberOfSecound;
};
int  ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

StTaskDuration SecoundToTaskDuration(int TotalSecound) {
	StTaskDuration SecoundTaskDuration;
	const int SecoundPerDays = 24 * 60 * 60;
	const int SecoundPerHours = 60 * 60;
	const int SecoundPerMinuts = 60;
	int Remender = 0;
	SecoundTaskDuration.NumberofDays = floor(TotalSecound / SecoundPerDays);
	Remender = TotalSecound % SecoundPerDays;
	SecoundTaskDuration.NumberOfHours = floor(Remender / SecoundPerHours);
	Remender = Remender % SecoundPerHours;
	SecoundTaskDuration.NumberOfMuntis = floor(Remender / SecoundPerMinuts);
	Remender = Remender % SecoundPerMinuts;
	SecoundTaskDuration.NumberOfSecound = Remender;
	return SecoundTaskDuration;
}

void PrintSecoundToTaskDuration(StTaskDuration secoundtaskduration) {
	cout << secoundtaskduration.NumberofDays << " : " << secoundtaskduration.NumberOfHours << " : " << secoundtaskduration.NumberOfMuntis << " : " << secoundtaskduration.NumberOfSecound << endl;
}
int main() {
	int TotalSecound = ReadPositiveNumber("Please enter total secound ?");
	PrintSecoundToTaskDuration(SecoundToTaskDuration(TotalSecound));
	return 0;
}


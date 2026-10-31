//Problem 92:Taks Duration In Seconds 
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

StTaskDuration ReadTaskDuration() {
	StTaskDuration TaskDuration;
	TaskDuration.NumberofDays = ReadPositiveNumber("Please enter number of days ?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter number of hours ?");
	TaskDuration.NumberOfMuntis = ReadPositiveNumber("Please enter number of munits ?");
	TaskDuration.NumberOfSecound = ReadPositiveNumber("Please enter number of secounds ?");
	return TaskDuration;
}

int TaskdurationInSecound(StTaskDuration TaskDuratin) {
	int TaskDurationInSecound =0 ;
	TaskDurationInSecound = TaskDuratin.NumberofDays * 24 * 60 * 60;
	TaskDurationInSecound += TaskDuratin.NumberOfHours * 60 * 60;
	TaskDurationInSecound += TaskDuratin.NumberOfMuntis * 60;
	TaskDurationInSecound += TaskDuratin.NumberOfSecound;
	return TaskDurationInSecound;
}

int main() {
	cout << "Total TaskDuration in secound :" << TaskdurationInSecound(ReadTaskDuration());
	return 0;
}



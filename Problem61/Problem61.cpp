//Problem 61:Average Pass/Fail
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum  EnPassFail { Pass = 1, Fail = 2 };
void ReadThreeNumber(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter Mark 1 ?" << endl;
	cin >> Mark1;
	cout << "Please enter Mark 2 ?" << endl;
	cin >> Mark2;
	cout << "Please enter Mark 3 ?" << endl;
	cin >> Mark3;
}
int SumNumber(int Mark1, int Mark2, int Mark3) {
	return (Mark1 + Mark2 + Mark3);
}

float AvgNumber(int Mark1,int  Mark2,int  Mark3) {
	return (float)SumNumber(Mark1, Mark2, Mark3) / 3;
}
EnPassFail CheckMarks(float avg) {
	if (avg >= 50)
		return EnPassFail::Pass;
	else
		return EnPassFail::Fail;
}

void PrintResult(float avg) {
	if (CheckMarks(avg) == EnPassFail::Pass)
		cout << "Your passed ..." << endl;
	else
		cout << "Your failed ..." << endl;



}
int main() {
	int Mark1, Mark2, Mark3;
	ReadThreeNumber(Mark1, Mark2, Mark3);
	PrintResult(AvgNumber(Mark1,Mark2,Mark3));
	return 0;
}


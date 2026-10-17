//Problem 58:Check mark and print result pass or fail .
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum  EnPassFail{Pass=1,Fail=2};
int ReadMark() {
	int mark;
	cout << "Please enter  Your Mark ?" << endl;
	cin >> mark;
	return mark;
}
EnPassFail CheckMark(int mark)
{
	if (mark >= 50)
		return EnPassFail::Pass;
	else
		return EnPassFail::Fail;
};
void PrintResult(int mark) {
	if (CheckMark(mark) == EnPassFail::Pass)
		cout << "Your Passed ..." << endl;
	else
		cout << "Your Failed ..." << endl;
}
int main() {
	int mark = ReadMark();
	PrintResult(mark);
	return 0;
}


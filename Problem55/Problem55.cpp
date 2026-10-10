//Problem 55:Hire a driver Case 2
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct StInfo
{
	int Age;
	bool HasDriverLicence;
	bool HasRecommenDation;
};

StInfo ReadInfo() {
	StInfo info;
	cout << "Please enter your age ?" << endl;
	cin >> info.Age;
	cout << "Do You have a driver licence ?" << endl;
	cin >> info.HasDriverLicence;
	cout << "Do You have RecommenDation ?" << endl;
	cin >> info.HasRecommenDation;
	return info;
}

bool IsAccepted(StInfo info) {
	if (info.HasRecommenDation)
	{
		return true;
	}
	else
	{
		return (info.Age > 21 && info.HasDriverLicence);
	}
}

void PrintResult(StInfo info) {
	if (IsAccepted(info))
		cout << "Hired ..." << endl;
	else
		cout << "Rejecter .." << endl;
}

int main() {
	PrintResult(ReadInfo());
	return 0;
}


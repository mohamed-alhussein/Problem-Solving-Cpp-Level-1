//Problem 54:Hire Driver Licence
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct StInfo
{
	int Age;
	bool HasDriverLicence;
};
StInfo ReadInfo() {
	StInfo info;
	cout << "Please enter your age ?" << endl;
	cin >> info.Age;
	cout << "Do You have a driver licence ?" << endl;
	cin >> info.HasDriverLicence;
	return info;
}

bool IsAccepted(StInfo info) {
	return (info.Age > 21 && info.HasDriverLicence);
}

void PrintResult(StInfo info) {
	if (IsAccepted(info))
		cout<<"Hired ..."<<endl;
	else
		cout<<"Rejecter .."<<endl;
}

int main() {
	PrintResult(ReadInfo());
		return 0;
}

//Problem 56:Enter FirstName and LastName
#include<iostream>
#include<string>
using namespace std;
struct StFullName
{
	string FirstName;
	string LastName;
};

StFullName ReadFullName() {
	StFullName Name;
	cout << "Please enter your firstname ?" << endl;
	cin >> Name.FirstName;
	cout << "Please enter your lastname ?" << endl;
	cin >> Name.LastName;
	return Name;
}

string FullName(StFullName Name) {
	string FullName = " ";
	FullName=Name.FirstName + " " + Name.LastName;
	return FullName;
}

void PrintFullName(string Fullname) {
	cout << " Your Full Name is :" << Fullname << endl;
}
int main() {
	PrintFullName(FullName(ReadFullName()));
	return 0;
}


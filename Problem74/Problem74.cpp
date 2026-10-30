//Problem 74:valid age and invalid 
#include<iostream>
#include<string>
using namespace std;
int ReadAge() {
	int Age;
	cout << "Please enter your Age ?" << endl;
	cin >> Age;
	return Age;
}

bool ValidaterNumberInRang(int Number, int From, int To) {
	return (Number >= From && Number <= To);
}

void PrintResultAge(int Age) {
	if (ValidaterNumberInRang(Age,18,45))
		cout<<Age<<" is a valid age ..."<<endl;
	else
		cout<<Age<<" is a invalid age ..."<<endl;
}
int main() {
	PrintResultAge(ReadAge());
		return 0;
}


//Problem 75:Read Until Age beteen 18 and 45
#include<iostream>
#include<string>
using namespace std;
int ReadAge() {
	int age;
	cout << "Please enter your age between 18 and 45 ?" << endl;
	cin >> age;
	return age;
}
bool Valid_Number_Age(int Number, int From, int To) {
	return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To) {
	int Age = 0;
	do
	{
		Age = ReadAge();

	} while (!Valid_Number_Age(Age,From,To));
	return Age;
}
void PrintAge(int Age) {
	cout << " your Age is : " << Age << endl;
}
int main() {
	PrintAge(ReadUntilAgeBetween(18, 45));
	return 0;
}

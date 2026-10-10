//Problem 2:Read Name and print it 
/*
output:
Please enter your Name ?
Mohamed
Your Name is :Mohamed
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string ReadName() {
	string Name;
	cout << "Please enter your Name ?" << endl;
	getline(cin, Name);
	return Name;
}
void PrintName(string Name) {

	cout << "Your Name is :" << Name << endl;
}

int main() {
	PrintName(ReadName());
	return 0;
}


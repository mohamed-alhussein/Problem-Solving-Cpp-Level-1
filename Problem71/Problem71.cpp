//Problem 71: Circle Area Along the circumference 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float ReadCircumference() {
	float l;
	cout << "Please enter l ?" << endl;
	cin >> l;
	return l;
}
float CircleAreaByCircumference(float l) {
	const float  PI = 3.14;
	float Area = pow(l, 2) / (4 * PI);
	return Area;
}
void PrintResultArea(float Area) {
	cout << "Circle Area By Circumference is :" << Area << endl;
}
int main() {
	PrintResultArea(CircleAreaByCircumference(ReadCircumference()));
	return 0;

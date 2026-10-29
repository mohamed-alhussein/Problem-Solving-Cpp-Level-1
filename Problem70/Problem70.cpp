//Problem 70:Cicle Area inscribed in a square 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float ReadSquareSide() {
	float A;
	cout << "Please enter A ?" << endl;
	cin >> A;
	return A;
}
float CircleAreaInscribedInSquare(float A) {
	const float PI = 3.14;
	float Area = PI * pow(A, 2) / 4;
	return Area;
}

void PrintResultArea(float Area) {
	cout << "Circle Area By Diameter is :" << Area << endl;
}
int main() {
	PrintResultArea(CircleAreaInscribedInSquare(ReadSquareSide()));
	return 0;
}


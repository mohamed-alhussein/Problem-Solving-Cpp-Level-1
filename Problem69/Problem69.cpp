//Problem 69:Circle Area by Diameter
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float ReadDiameter()  {
	float D;
	cout << "Please enter D(Diameter) ?" << endl;
	cin >> D;
	return D;
}
float CircleAreaByDiameter(float D) {
	const float PI = 3.14;
	float Area = PI * pow(D, 2) / 4;
	return Area;
}

void PrintResultArea(float Area) {
	cout << "Circle Area By Diameter is :" << Area << endl;
}
int main() {
	PrintResultArea(CircleAreaByDiameter(ReadDiameter()));
	return 0;
}

//Problem 68:Circle Area 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float ReadNumber() {
	float R;
	cout << "Please enter R ?" << endl;
	cin >> R;
	return R;
}

float CircleArea(float R) {
	const float PI = 3.14;
	float Area = PI * pow(R, 2);
	return Area;
}
void PrintResultCircleArea(float Area) {
	cout << " Circle Area is :" << Area << endl;
}
int main() {
	float R = ReadNumber();
	PrintResultCircleArea(CircleArea(R));
	return 0;
}


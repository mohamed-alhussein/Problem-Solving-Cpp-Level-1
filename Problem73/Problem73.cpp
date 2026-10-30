//Problem 73:Circle Area Described Around an Arbitray Tringle
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadTrianglData(float& A, float& B,float &C) {
	cout << "Please enter A ?" << endl;
	cin >> A;
	cout << "Please enter B ?" << endl;
	cin >> B;
	cout << "Please enter C ?" << endl;
	cin >> C;
}
float CircleAreaByTriangle(float A, float B, float C) {
	const float PI = 3.14;
	float P = (A + B + C) / 2;
	float T;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float Area = PI * pow(T, 2);
	return Area;
}
void PrintCircleAreaByTriangle(float Area) {
	cout << "Circle Area By Triangle is :" << Area << endl;
}
int main() {
	float A, B, C;
	ReadTrianglData(A, B, C);
	PrintCircleAreaByTriangle(CircleAreaByTriangle(A, B, C));
	return 0;
}

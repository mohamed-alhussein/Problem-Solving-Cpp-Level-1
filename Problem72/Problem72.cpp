//Problem 72:Circle Area Inscribed in an Isosceles Tringle 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadTrianglData(float& A, float& B) {
	cout << "Please enter A ?" << endl;
	cin >> A;
	cout << "Please enter B ?" << endl;
	cin >> B;
}
float CircleAreaByTriangle(float A, float B) {
	const float PI = 3.14;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / 2 * A + B);
	return Area;
}
void PrintCircleAreaByTriangle(float Area) {
	cout << "Circle Area By Triangle is :" << Area << endl;
}
int main() {
	float A, B;
	ReadTrianglData(A, B);
	PrintCircleAreaByTriangle(CircleAreaByTriangle(A, B));
	return 0;
}


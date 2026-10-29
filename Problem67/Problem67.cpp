//Problem 67:Triangle Area
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadNumbers(float& A, float& H) {
	cout << "Please enter A ?" << endl;
	cin >> A;
	cout << "Please enter H ?" << endl;
	cin >> H;
}
float TriangleArea(float A, float H) {
	float Area = A * H / 2;
	return Area;
}
void PrintResultTriangleArea(float Area) {
	cout << "Triangle Area is :" << Area << endl;
}
int main() {
	float A, H;
	ReadNumbers(A, H);
	PrintResultTriangleArea(TriangleArea(A, H));
	return 0;
}

//Problem 66:Rectangle Area By Diagonal & Side
/*
Write a prgram to calculate rectangle area through diagonal and side area of rectangle and print it on the screen
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadNumbers(float& a, float& d) {
	cout << "Please enter a ?" << endl;
	cin >> a;
	cout << "Please enter d ?" << endl;
	cin >> d;
}
float AreaRectangle(float a, float d) {
	float Area = a * sqrt(pow(d, 2) - pow(a, 2));
	return Area;

}
void PrintResultAreaRectangle(int Area) {
	cout << " Rectangle Area is :" << Area << endl;
}
int main() {
	float a, d;
	ReadNumbers(a, d);
	PrintResultAreaRectangle(AreaRectangle(a, d));
	return 0;
}


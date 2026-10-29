//Problem 65:Rectangel Area
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadTowNumbers(int& A, int& B) {
	cout << "Please enter A ?" << endl;
	cin >> A;
	cout << "Please enter B ?" << endl;
	cin >> B;
}

int CluclateRectangleArea(int A, int B) {
	return A * B;
}
void PrintResultArea(int Area) {
	cout << "Rectangle Area is :" << Area << endl;
}
int main() {
	int A, B;
	ReadTowNumbers(A, B);
	PrintResultArea(CluclateRectangleArea(A, B));
	return 0;
}


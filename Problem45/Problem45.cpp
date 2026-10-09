//Problem #45:Count Negitive  Numbers in Array
/*
Write a program to fill array with max size 100 with random numbers from -100 to 100, then print the count of
Negitive  numbers

output:
Enter Array Element ?
10
Array Elements is :
-59 76 3 69 -26 -54 -79 -88 -72 43
Negitive Numbers Count  is :6
*/
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillArrayWithRandom(int arr[100], int& arrLength) {
	cout << "Enter Array Element ?\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(-100, 100);
	}
}
void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int CountNegitvieNumberInArray(int arr[100], int arrLength) {
	int CountNegitive = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < 0)
		{
			CountNegitive++;
		}
	}
	return CountNegitive;
}
int main() {
	int arr[100], arrLength = 0;
	FillArrayWithRandom(arr, arrLength);
	cout << "Array Elements is :\n";
	PrintArray(arr, arrLength);
	cout << "Negitive Numbers Count  is :" << CountNegitvieNumberInArray(arr, arrLength) << endl;
	return 0;
}

//Problem #44:Count Positive Numbers in Array 
/*
Write a program to fill array with max size 100 with random numbers from -100 to 100, then print the count of
positive numbers


output :
Enter Array Element ?
10
Array Elements :
55 -2 -70 -50 -84 64 -26 56 -95 -74
Positive Numbers count is :3


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
int CountPositiveNumberInArray(int arr[100], int arrLength) {
	int CountPositive = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] >= 0)
		{
			CountPositive++;
		}
	}
	return CountPositive;
}
int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandom(arr, arrLength);
	cout << "Array Elements :\n";
	PrintArray(arr, arrLength);
	cout << "Positive Numbers count is :" << CountPositiveNumberInArray(arr, arrLength) << endl;
	return 0;
}

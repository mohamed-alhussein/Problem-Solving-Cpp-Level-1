//Problem #35:Check Number In Array 
/*
Write a program to fill array with max size 100 ,with random numbers from 1 to 100 ,read number and print if it's
found of not ..
*/
/*
Enter number of elements ?
10

Array 1 elements :
79 53 7 49 20 75 35 84 25 9
Please enter number to search for ?
5

 Number you are looking for is :5
No ,The Number is not found :-(


Enter number of elements ?
10

Array 1 elements :
31 88 21 46 13 67 98 84 67 44
Please enter number to search for ?
44

 Number you are looking for is :44
Yas,The Number is found :-(
*/
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int ReadNumber() {
	int Number = 0;
	cout << "Please enter number to search for ?" << endl;
	cin >> Number;
	return Number;
}

int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumber(int arr1[100], int& arrLength) {
	cout << "Enter number of elements ?" << endl;
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr1[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

short FindPositionInArray(int arr[100], int arrLength, int Number) {
	for (int i = 0; i < arrLength; i++)
	{
		if (Number == arr[i])
		{
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int arr[100], int arrLength, int Number) {
	return FindPositionInArray(arr, arrLength, Number) != -1;
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandomNumber(arr, arrLength);
	cout << "\nArray 1 elements :\n";
	PrintArray(arr, arrLength);
	int Number = ReadNumber();
	cout << "\n Number you are looking for is :" << Number << endl;
	if (!IsNumberInArray(arr, arrLength, Number))
	{
		cout << "No ,The Number is not found :-(\n";
	}
	else
	{
		cout << "Yas,The Number is found :-(\n";
	}
	return 0;
}

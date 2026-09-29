//Problem #34: Ruturn number index in array 
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100 ,read number and return its indeax in array
if found otherwisw return -1
*/

/*
Enter number of elements ?
10

Array 1 elements :
78 45 15 10 50 36 60 42 50 72
Please enter number to search for ?
50

Number you lookuing for is :50
The number found at position :4
The number found its oreder :5




Enter number of elements ?
10

Array 1 elements :
99 20 61 16 41 53 48 37 55 69
Please enter number to search for ?
5

Number you lookuing for is :5
The number is not found :-(



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

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandomNumber(arr, arrLength);
	cout << "\nArray 1 elements :\n";
	PrintArray(arr, arrLength);
	int Number = ReadNumber();
	cout << endl;
	cout << "Number you lookuing for is :" << Number << endl;
	int NumberPosition = FindPositionInArray(arr, arrLength, Number);
	if (NumberPosition == -1)
	{
		cout << "The number is not found :-(\n";
	}
	else
	{
		cout << "The number found at position :" << NumberPosition << endl;
		cout << "The number found its oreder :" << NumberPosition + 1 << endl;
	}
	return 0;
}
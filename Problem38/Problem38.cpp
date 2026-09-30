//Problem #38:Copy Odd Numbers To A New Array
/*
Write a program to fill array with max size 100 with random numbers form 1 to 100
copy only odd numbers  to another array using AddArrayElements and print it ...
*/
/*
Enter number of elements ?
10

 Array 1 elements :
15 82 42 42 34 32 73 65 42 34

 Array 2 Odd numbers :
15 73 65
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
void FillArrayWithRandomNumber(int arr[100], int& arrLength) {
	cout << "Enter number of elements ?" << endl;
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void AddArrayElement(int Number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyOddNumbers(int arrSource[100], int arrDistination[100], int arrLength, int& arrLength2) {
	for (int i = 0; i < arrLength; i++)
	{
		if (arrSource[i] % 2 != 0)
		{
			AddArrayElement(arrSource[i], arrDistination, arrLength2);
		}
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0, arrLength2 = 0;
	FillArrayWithRandomNumber(arr, arrLength);
	int arr2[100];
	CopyOddNumbers(arr, arr2, arrLength, arrLength2);

	cout << "\n Array 1 elements :\n";
	PrintArray(arr, arrLength);

	cout << "\n Array 2 Odd numbers :\n";
	PrintArray(arr2, arrLength2);

	return 0;
}

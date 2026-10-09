
//Problem #40: Copy Distinct Numbers to Array
/*
Write a program to fill array with numbers , then print distinct numbers to another array

OutPut:
Array 1 Elements :
10 10 10 50 50 70 70 70 70 90
Array 2 distict elements :
10 50 70 90
*/
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
void FillArrayWithNumbers(int arr[100], int& arrLength) {
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

short FindPositionInArray(int Number, int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		if (Number == arr[i])
		{
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength) {
	return FindPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyDistictArray(int arr[100], int arr2[100], int arrLength, int& arr2Length) {
	for (int i = 0; i < arrLength; i++)
	{
		if (!IsNumberInArray(arr[i], arr2, arr2Length))
		{
			AddArrayElement(arr[i], arr2, arr2Length);
		}
	}

}
int main() {
	int arr[100], arrLength = 0;
	FillArrayWithNumbers(arr, arrLength);
	cout << "Array 1 Elements :\n";
	PrintArray(arr, arrLength);
	int arr2[100], arr2Length = 0;
	CopyDistictArray(arr, arr2, arrLength, arr2Length);
	cout << "Array 2 distict elements : " << endl;
	PrintArray(arr2, arr2Length);
}





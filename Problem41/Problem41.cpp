//Problem #41:Is Palindrome in array 
/*
Write a program to fill array with numbers , then check if it is palindrome array or not ,
Note :palindrome array can be read the same from rigth to left and from left to rigth ...


Output:
Array Elements :
10 20 30 30 20 10

Yas , Array is palindrom
*/
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
void FillArrayWithNumbers(int arr[100], int& arrLength) {
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;

}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool IsPalindromeArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main() {
	int arr[100], arrLength = 0;
	FillArrayWithNumbers(arr, arrLength);
	cout << "Array Elements :\n";
	PrintArray(arr, arrLength);
	if (IsPalindromeArray(arr, arrLength))
	{
		cout << "\nYas , Array is palindrom \n";
	}
	else
	{
		cout << "\nNo, Array is not palindrom \n";
	}
	return 0;
}

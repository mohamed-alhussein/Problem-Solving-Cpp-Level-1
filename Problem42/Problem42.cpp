//Problem #42:Count Odd Numbers in Array
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100, then print the count of odd numbers

output:
Enter Array Element ?
10
Array Elements :
95 84 74 20 5 32 50 53 79 44
Odd Numbers Count is :4
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
int CountOddNumbersInArray(int arr[100], int arrLength) {
	int CountOdd = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 != 0)
		{
			CountOdd++;
		}
	}
	return CountOdd;
}
int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandom(arr, arrLength);
	cout << "Array Elements :\n";
	PrintArray(arr, arrLength);
	cout << "Odd Numbers Count is :" << CountOddNumbersInArray(arr, arrLength) << endl;
	return 0;
}

//Problem #43:Count Even Numbers in  Array 
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100, then print the count of odd numbers


output:
Enter Array Element ?
10
Array Elements :
18 58 39 67 72 4 42 89 71 47
Even Numbers Count is : 5
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

int CountEvenNumbersInArray(int arr[100], int arrLength) {
	int CountEven = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 == 0)
		{
			CountEven++;
		}
	}
	return CountEven;
}
int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandom(arr, arrLength);
	cout << "Array Elements :\n";
	PrintArray(arr, arrLength);
	cout << "Even Numbers Count is : " << CountEvenNumbersInArray(arr, arrLength) << endl;
	return 0;
}

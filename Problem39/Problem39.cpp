//Problem #39:Copy Prime Numbers to a new Array
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100
copy only prime numbers to another array using AddArrayElement and print it ..
*/



/*
Enter Array Element ?
10

Array 1 elements is :
26 14 79 80 83 46 43 46 83 48

Array 2 element prime number
79 83 43 83

*/
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

enum EnPrimeNotPrime { Prime = 1, NotPrime = 2 };

EnPrimeNotPrime CheckPrimeNumber(int Number) {
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return EnPrimeNotPrime::NotPrime;
	}
	return EnPrimeNotPrime::Prime;
}

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


void AddArrayElement(int Number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyPrimeNumber(int arrSource[100], int arrDistination[100], int arrLength, int& arrLength2) {
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrimeNumber(arrSource[i]) == EnPrimeNotPrime::Prime)
		{
			AddArrayElement(arrSource[i], arrDistination, arrLength2);
		}
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0, arrLength2 = 0;
	FillArrayWithRandom(arr, arrLength);
	cout << "\nArray 1 elements is :\n";
	PrintArray(arr, arrLength);
	int arr2[100];
	CopyPrimeNumber(arr, arr2, arrLength, arrLength2);

	cout << "\nArray 2 element prime number \n";
	PrintArray(arr2, arrLength2);
	return 0;
}



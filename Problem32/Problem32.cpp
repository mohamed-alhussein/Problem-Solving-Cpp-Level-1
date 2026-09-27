//Problem #32:Copy Array In Reverse Order 
/*
Write a program to fill arra with max size 100 with random numbers from 1 to 100 ,copy it to another
array in reverse order and print it .

*/

/*
Enter number of elements ?
10

Array 1 elements :
2 10 44 67 35 72 35 8 35 52

 Array 2 elements after copy :
52 35 8 35 72 35 67 44 10 2
*/
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
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

void CopyReverseInArrayOrder(int arrSource[100], int arrDistination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arrDistination[i] = arrSource[arrLength - 1 - i];
	}

}

int main() {
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100];
	int arrLength;

	FillArrayWithRandomNumber(arr1, arrLength);
	cout << "\nArray 1 elements :\n";
	PrintArray(arr1, arrLength);
	CopyReverseInArrayOrder(arr1, arr2, arrLength);
	cout << "\n Array 2 elements after copy :\n";
	PrintArray(arr2, arrLength);
	return 0;

}

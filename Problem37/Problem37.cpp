//Problem #37:Copy Array using addarrayelement
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100 ,cop it to another arra using
AddArrayElemeent , and print it
*/

/*
Enter number of elements ?
10

 Array 1 elements is :
32 76 86 83 67 21 48 59 10 20

Array 2 elemets after copy :
32 76 86 83 67 21 48 59 10 20
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
	}}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;}

void AddArrayElements(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;}

void CopyArrayUsingAddArrayElements(int arrSource[100], int arrDistination[100], int arrLength, int& arrLength2) {
	for (int i = 0; i < arrLength; i++)
	{
		AddArrayElements(arrSource[i], arrDistination, arrLength2);
	}}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0;
	FillArrayWithRandomNumber(arr, arrLength);
	cout << "\n Array 1 elements is :\n";
	PrintArray(arr, arrLength);

	int arr2[100], arrLength2 = 0;
	CopyArrayUsingAddArrayElements(arr, arr2, arrLength, arrLength2);
	cout << "\nArray 2 elemets after copy :\n";
	PrintArray(arr2, arrLength2);
	return 0;}

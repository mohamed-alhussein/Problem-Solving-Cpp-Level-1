//Problem 36:Add Arra Element Simi Dynamic
/*
Write a program to daynamically read numbers and save them in an array max size of 100 , allocate 
simi-dynamic array length.... 
*/

/*
Please enter a number ?
10
Do you ant to add more numbers ?[0]:No ,[1]:yas ?
1
Please enter a number ?
20
Do you ant to add more numbers ?[0]:No ,[1]:yas ?
1
Please enter a number ?
30
Do you ant to add more numbers ?[0]:No ,[1]:yas ?
1
Please enter a number ?
40
Do you ant to add more numbers ?[0]:No ,[1]:yas ?
1
Please enter a number ?
50
Do you ant to add more numbers ?[0]:No ,[1]:yas ?
0

----------------------------------------
Array Length :5
Array Elements :10 20 30 40 50

*/

#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int ReadNumber() {
	int Num = 0;
	cout << "Please enter a number ?\n";
	cin >> Num;
	return Num;
}

void ADDArrayElement(int Number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = Number;
}

void InputNumberInArray(int arr[100], int &arrLength) {
	bool AddMore = true;
	do
	{
		ADDArrayElement(ReadNumber(), arr, arrLength);
		cout << "Do you ant to add more numbers ?[0]:No ,[1]:yas ?\n";
		cin >> AddMore;
	} while (AddMore);
}


void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	int arr[100], Length = 0;
	InputNumberInArray(arr, Length);
	cout << "\n----------------------------------------\n";
	cout << "Array Length :" << Length << endl;
	cout << "Array Elements :";
	PrintArray(arr, Length);
	return 0;
}

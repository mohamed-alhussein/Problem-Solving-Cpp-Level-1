//Problem #33:Fill Array With Keys 
/*
Write a program to read how many keys to generate and fill them in array then print them on the screen ..
*/
/*
How Many Keys do you want to generate ?

10
Array[0] : SJOX-QINH-IUMT-AMZC
Array[1] : JBOT-IHHY-FVVY-UMVI
Array[2] : RWRY-WLQC-CCIZ-NSIC
Array[3] : ATFS-KRQN-ONAU-TCFQ
Array[4] : TBUU-IIVF-MYMA-GCPW
Array[5] : LEYH-VFYD-REJK-BUOJ
Array[6] : SBHB-ZBEY-RZGN-COWA
Array[7] : VBBL-YUPK-RYVO-HTAL
Array[8] : BMQC-TNIR-ILHB-LJKV
Array[9] : YOWB-MCIC-IUGF-YIBH
*/
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

enum EnCharType { SmallLetter = 1, CapitalLetter = 2, Special = 3, Digit = 4 };

int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

char GetCharType(EnCharType CharType) {
	switch (CharType)
	{
	case EnCharType::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case EnCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case EnCharType::Special:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case EnCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}
	default:
		return '\0';
		break;
	}
}


void PrintStringArray(string arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array[" << i << "] :" << arr[i] << endl;
	}
	cout << endl;
}

string GetWord(EnCharType CharType, int length) {
	string Word = "";
	for (int i = 0; i < length; i++)
	{
		Word = Word + GetCharType(CharType);
	}
	return Word;
}


string GetGenrateKey() {
	string Key = " ";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4) + "-";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4) + "-";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4) + "-";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4);
	return Key;
}

void FillArrayWithKeys(string arr[100], int& arrLength) {

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GetGenrateKey();
	}
}

int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


int main() {
	srand((unsigned)time(NULL));
	string arr[100];
	int arrLength = 0;
	arrLength = ReadPositiveNumber("How Many Keys do you want to generate ?\n");
	FillArrayWithKeys(arr, arrLength);
	PrintStringArray(arr, arrLength);
	return 0;
}





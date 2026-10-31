//Problem 86:Simple Calculator 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum EnOperationType { Add = '+', Sub = '-',Mul='*',Div='/' };
float ReadNumber(string message) {
	float Number = 0;
	cout << message << endl;
	cin >> Number;
	return Number;
}
EnOperationType ReadOpType() {
	char OT = '+';
	cout << "Please enter Operation Type (+ , - , / , *)" << endl;
	cin >> OT;
	return (EnOperationType)OT;
}
float ClculateResult(float Number1, float Number2, EnOperationType OpType) {
	switch (OpType)
	{
	case EnOperationType::Add:
		return Number1 + Number2;
	case EnOperationType::Sub:
		return Number1 - Number2;
	case EnOperationType::Mul:
		return Number1 * Number2;
	case EnOperationType::Div:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

int main() {
	float Number1 = ReadNumber("Please enter a number 1 ?");
	float Number2 = ReadNumber("Please enter a number 2 ?");
	EnOperationType OpType = ReadOpType();
	cout << "Result =" << ClculateResult(Number1, Number2, OpType);
	return 0;
}


#include <iostream>
using namespace std;


//In this code I´m gonna learn how to add, subtract, multiply and divide numbers

int main() {

	int number1,number2;
	cout << "Enter number 1: ";
	cin >> number1;
	cout << "Enter number 2: ";
	cin >> number2;

	int resultSum = number1+number2;
	int resultSubtract = number1-number2;
	int resultMultiply = number1*number2;
	float resultDivision = number1/number2;

	cout << "The result of the addition is: " << resultSum << "\nThe result of the subtrackt is: " << resultSubtract << "\nThe result of the multiply is: " << resultMultiply << "\nThe result of the division is: " << resultDivision;
	return 0;
}

//write include statements
#include <iostream>
#include "repetition.h"

using std::cout;
using std::cin;
using std::string;

//write using statements

int main() 
{
	int selection;
	string exit_selection;
	int number;
	int number1;
	int number2;
	int result;

	do
	{
		cout << "1-Factorial" << "\n";
		cout << "2-Greatest Common Divisor" << "\n";
		cout << "3-Exit" << "\n";
		cout << "Enter your selection: ";
		cin >> selection;

	} while (selection != 1 && selection != 2 && selection != 3);

	if (selection == 1){
		cout << "Enter a number: ";
		cin >> number;
		result = factorial(number);
		cout << "Factorial of " << number << " is: " << result << "\n";
	}

	if (selection == 2){
		cout << "Enter the first number: ";
		cin >> number1;
		cout << "Enter the second number: ";
		cin >> number2;
		result = gcd(number1, number2);
		cout << "Greatest common divisor of " << number1 << " and " << number2 << " is: " << result << "\n";
	}
	
	if (selection == 3){
		cout << "Are you sure you want to exit? \n";
	}

	return result;
}

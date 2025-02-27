//write include statements
#include <iostream>
#include "decisions.h"

using std::cin;
using std::cout;
using std::string;

int main() 
{
	int grade;

	cout << "Enter a grade: ";
	cin >> grade;

	cout << "Grade from if function: " << get_letter_grade_using_if(grade) << "\n";
	cout << "Grade from switch function: " << get_letter_grade_using_switch(grade) << "\n";

	return 0;
}
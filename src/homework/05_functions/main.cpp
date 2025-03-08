#include <iostream>
#include <string>
#include "func.h"

using std::cout;
using std::cin;


int main() 
{
	int option;
	std::string dna_string;

	do{
		cout << "Menu \n";
		cout << "1-Get GC Content \n";
		cout << "2- Get DNA Complement \n";
		cout << "3-Exit \n";
		cin >> option;
	} while (option != 1 && option != 2 && option != 3);

	if (option == 1){
		cout << "Enter the DNA string: ";
		cin >> dna_string;

		cout << get_gc_content(dna_string) << "\n";
	}

	if (option == 2){
		cout << "Enter the DNA string: ";
		cin >> dna_string;

		cout << get_dna_complement(dna_string) << "\n";
	}

	if (option == 3){
		exit;
	}
	
	return 0;
}

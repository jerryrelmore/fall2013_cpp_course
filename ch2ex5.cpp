//ch2ex5.cpp
// returns nonzero integer if input letter is lowercase,
// returns 0 if input letter is uppercase
#include <iostream>
#include "..\include\ctype.h"

using namespace std;

int main()
	{
	char letter;		// declare variable for user input
	cout << "Input a letter and press Enter: "; // prompt for input
	cin >> letter;
	
	cout << islower(letter) << endl;		// display 0 if uppercase,
													// non-zero if lowercase
	 	
	return 0;
	}
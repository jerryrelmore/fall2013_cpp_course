// gallons.cpp
// Assuming 7.481 gallons in a cubic foot, write a program that
// asks the user to enter a number of gallons and then displays
// the equivalent in cubic feet. Ch 2 Ex 1
#include <iostream>
using namespace std;

int main()
	{const float cubic_foot = 7.481;			// # of gallons in a cubic foot
	float gallons, answer = 0;								// variable to for user to input gallons
	
	cout << "GALLONS TO CUBIC FEET CONVERSION" << endl;	// title
	cout << "Enter number of gallons: ";
	cin >> gallons;											// get user input
	answer = gallons * cubic_foot;				// compute answer
	cout << "\n" << gallons << " gallons is equivalent to " 
	     << answer << " cubic feet." << endl;		// display the answer
	
	return 0;
	}
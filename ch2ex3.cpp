// ch2ex3.cpp
// generate book-specified output
#include <iostream>
#include <cmath>

using namespace std;

int main()
	{
	int value = 10;		// set initial value
	
	cout << value << endl; 			// display initial value
	value += 10;						// add 10 to initial value
		
	cout << value << endl;			// display new value
	cout << --value << endl;		// display value - 1
	
	return 0;
	}
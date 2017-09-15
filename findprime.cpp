// findprime.cpp
// this program displays all primes up to the max value of unsigned long and also writes them to a file

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	const unsigned long limit = 4294967295;			// max value of an unsigned long variable
	unsigned long prime = 1;				// variable to hold primes
	int yes_no = 1;						// variable to track number of times a variable can be divided w/ no remainder
								// the max number of times a prime can be divided w/ no remainder is 2 (1 and itself)
	ofstream outfile("primes.csv");				// create file - erase old one if it's already there

	while(prime < limit) {
		for (unsigned long count = 1; count <= prime / 2; count++) { // only need to count up to prime / 2, as a prime cannot be divided by
			if (prime % count == 0) {			    // any number with by greater than half its value and have no remainder
				yes_no += 1;				    // increment tracker
			}
		}
	//DEBUG: cout << "yes_no = " << yes_no << endl;
	if (yes_no == 2) {
		cout << "The number " << prime << " is a prime." << endl;	// if the number is prime, then print it 
		if (prime < limit) {
			outfile << prime << "," << endl;	// if prime is less than the limit, add prime followed by a comma 
		}
		else {
			outfile << prime;			// if prime is equal to the limit, then write to file without a comma since EOF
		}
	}
	prime += 1;						// increment prime
	yes_no = 1;						// reset tracker
	}

	return 0;
}

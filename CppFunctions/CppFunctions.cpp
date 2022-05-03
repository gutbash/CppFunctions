// CppFunctions.cpp
// C++ program that uses functions to calculate the sum, difference, product, quotient, and remainder of two integers input by the user.
// last edited May 02, 2022 by S. Gutierrez CSCI 112

#include <iostream>

// declares function //

void calculate();

// main function //

// main function diplays a welcome message and calls the calculate() function
int main() {

	// displays a welcome message
	std::cout << "Welcome to Calculate. You can calculate the sum, difference, product, quotient, and remainder of two integers input (x, y).\n\n";

	// calls the calculate() function
	calculate();

	return 0;

} // ends main() function

// defines function //

// function calculates the sum, difference, product, quotient, and remainder of two integers input by the user
void calculate() {

	// initializes loop check
	std::string again;

	// loops program depending on loop check
	while (again != "n") {

		// initializes operation variables
		double sum;
		double diff;
		double prod;
		double quot;
		int rem;

		// initializes input variables
		int x;
		int y;

		// prompts user for input x
		std::cout << "\nEnter int x: ";
		std::cin >> x;

		// prompts user for input y
		std::cout << "\nEnter int y: ";
		std::cin >> y;

		// operates on input variables
		// stores results in operation variables
		sum = x + y;
		diff = x - y;
		prod = x * y;
		quot = x / y;
		rem = x % y;

		// displays the formatted results of all the operations
		std::cout << "\nSum: " << sum << "\nDifference: " << diff << "\nProduct: " << prod << "\nQuotient: " << quot << "\nRemainder: " << rem;

		// prompts user to end loop or continue
		std::cout << "\n\nWould you like to do another calculation? [y/n]: ";
		std::cin >> again;

	} // ends while loop

	// returns after loop check ends while loop
	return;

} // ends calculate() function
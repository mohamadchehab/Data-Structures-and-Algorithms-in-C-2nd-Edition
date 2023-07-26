#include <cstdlib>
#include <iostream>


int main() {
	// Declare two variables to store the 2 entered integers (a int has a size of 32 bits)
	int num1, num2;
	
	std::cout << "Enter 2 integers: " << std::endl;
	std::cin >> num1 >> num2;

	// Compute the sum of the two integers 
	int sum = num1 + num2;

	// Display the sum of the 2 integers
	std::cout << "The sum of the 2 integers is: " << sum << std::endl;
	
	// Returns EXIT_SUCCESS from the <cstdlib> which has a value of 0
	return EXIT_SUCCESS;
}
#include <cstdlib>
#include <iostream>

// Declare a pointer and a int and display the int by dereferencing the pointer 
int main() {
	int num1 = 4;
	int* ptr = &num1;

	std::cout << *ptr << std::endl;

	return EXIT_SUCCESS;
}
#include <cstdlib>
#include <iostream>

typedef char* BufferPtr;
typedef double Coordinate;

int main() {
	Coordinate x = 51.0293;
	Coordinate y = 49.1313;
	std::cout << "x: " << x << std::endl;


	char letter = 'a';
	BufferPtr ptrToChar = &letter;
	std::cout << "The letter is " << *ptrToChar << std::endl;
	return EXIT_SUCCESS;

}
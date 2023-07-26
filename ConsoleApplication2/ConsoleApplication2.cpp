#include <cstdlib>
#include <iostream>
#include <string>

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

struct Passenger {
	std::string name;
	int age;
	bool premium;
	MealType mealPref;
};

// Declare a pointer and a int and display the int by dereferencing the pointer 
int main() {
	Passenger* pass;

	pass = new Passenger;

	pass->name = "John Smith";

	std::cout << pass->name << std::endl;

	return EXIT_SUCCESS;
}
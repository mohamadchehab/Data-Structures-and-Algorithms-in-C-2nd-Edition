#include <cstdlib>
#include <iostream>

void increment(int& v) {
	v = v + 1;
}

// We notice here that there wasn't a copy made but that the reference modified the value of v
int main() {
	int v = 5;
	increment(v);
	std::cout << v << std::endl;

}
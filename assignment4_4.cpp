#include <iostream>

int main() {
	long binary;
	long factor = 1;
	long total = 0;

	std::cout << "Enter the binary number: " << std::endl;
	std::cin >> binary;

	while (binary != 0) {
		total += (binary % 10) * factor;
		binary /= 10;
		factor *= 2;
	}

	std::cout << "Equivalent hexadecimal value: " << total;

	return -1;
}
#include <cmath>
#include <iostream>

int main() {
	int r = 0;
	const double PI = std::atan(1) * 4;
	double volume = 0;

	std::cout << "Enter radius: " << std::endl;
	std::cin >> r;

	r = r * r;
	volume = r * PI;

	std::cout << "The volume is: " << volume << std::endl;
}
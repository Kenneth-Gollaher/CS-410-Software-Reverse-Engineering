#include <iostream>
#include <string>
#include <iomanip>

int main() {
	int rows;
	int space;
	int stars;
	int width;
	std::string spaceString;
	std::string starString;


	std::cout << "Enter the number of rows" << std::endl;
	std::cin >> rows;
	width = rows * 2 - 1;

	for (int i = 0; i < rows; i++) {
		spaceString = "";
		starString = "";

		stars = i * 2 + 1;
		space = width - stars;

		for (int j = 0; j < space / 2; j++) {
			spaceString = spaceString + ' ';
		}
		for (int j = 0; j < stars; j++) {
			starString = starString + '*';
		}

		std::cout << spaceString << starString << spaceString << std::endl;
	}

	for (int i = rows - 2; i >= 0; i--) {
		spaceString = "";
		starString = "";

		stars = i * 2 + 1;
		space = width - stars;

		for (int j = 0; j < space / 2; j++) {
			spaceString = spaceString + ' ';
		}
		for (int j = 0; j < stars; j++) {
			starString = starString + '*';
		}

		std::cout << spaceString << starString << spaceString << std::endl;
	}

	return -1;
}
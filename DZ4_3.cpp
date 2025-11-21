#include <iostream>

int main() {
	int var;
	std::cout << "Введите целое число: " << std::endl;
	std::cin >> var;

	for (int i = 1; i <= 10; ++i) {
		std::cout << var << " X " << i << " = " << var * i << std::endl;
	}

	return EXIT_SUCCESS;

}

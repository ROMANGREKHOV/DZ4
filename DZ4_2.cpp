#include <iostream>

int main() {
	int var;
	std::cout << "Введите целое число: " << std::endl;
	std::cin >> var;

	int otv{ 0 };
	while (var != 0) {
		otv += var % 10;
		var = var / 10;
	};

	std::cout << "Сумма цифр: " << otv;

	return EXIT_SUCCESS;

}

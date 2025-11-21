#include <iostream>

int main() {

	int var1,var2;
	var2 = 0;
	do {
		std::cout << "Введите целое число или число '0', чтобы закончить: " << std::endl;
		std::cin >> var1;
		var2 += var1;

	} while (var1 != 0);

	std::cout << "Сумма: " << var2;

	return EXIT_SUCCESS;

}

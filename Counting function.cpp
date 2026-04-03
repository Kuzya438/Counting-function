#include <iostream>
#include <cstdlib>

void counting_function() {
	static int quantity{};
	std::cout << "Количество вызовов функции counting_function(): " << ++quantity << std::endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	for (int i{}; i < 15; ++i){
		counting_function();
	}

	return EXIT_SUCCESS;
}

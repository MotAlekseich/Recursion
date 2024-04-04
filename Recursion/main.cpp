#include <iostream>
#include <cstdlib>
#include <ctime>

//Рекурсия - это прием программирования, когда функция вызывает саму себя непосредственно, либо косвенно.
unsigned long long factorial(int num) {
	if (num < 0)
		return 0;
	if (num == 0)
		return 1;
	return factorial(num - 1) * num;
}

	//
	int fibonacci(int num) {
		if (num <= 0)
			return 0;
		if (num == 1)
			return 1;
		return fibonacci(num - 1) + fibonacci(num - 2);
	}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//Задание факториал
	std::cout << "Введите число -> \n";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;

	//Задание число Фибоначи
	std::cout << "Введите номер числа Фибоначи -> ";
	std::cin >> n;
	std::cout << fibonacci(n) << std::endl;
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ' ';
	std::cout << std::endl;
	 

	return 0;
}
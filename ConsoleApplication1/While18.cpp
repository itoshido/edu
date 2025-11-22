#include <iostream>


int main() {
	setlocale(LC_ALL, "Rus");
	int a, count = 0, sum_digit = 0;
	std::cout << "Программа для определения количества и суммы цифр в числе" << std::endl;
	std::cout << "Введите Ваше число:" << std::endl;
	std::cin >> a;
	while (a != 0) {
		sum_digit += a % 10;
		count++;
		a /= 10;
	}
	std::cout << "Сумма цифр: " << sum_digit << std::endl;
	std::cout << "Количество цифр " << count << std::endl;



	return 0;

}
 
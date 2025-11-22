#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Программа по нахождению значения выражения" << endl;
	int count, power;
	float ans = 1;
	cout << "Введите 2 натуральных числа: " << endl;
	cin >> count >> power;
	for (int i1 = 2; i1 <= count; i1++) {
		int temp = 1;
		for (int i = 1; i < power; i++) {
			temp *= i1 * i1;
			cout << temp << " ";
		}
		ans += temp;
	}
	cout << "Результат выражения: " << ans << endl;
}
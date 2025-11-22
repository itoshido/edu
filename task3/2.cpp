#include <iostream>
#include <random>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Программа по рандомному (в диапазоне от 1 до 20) выводу звездочек в строке" << endl;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		int random_num = rand() % 20 + 1;
		for (int i = 1; i <= random_num; i++) {
			cout << '*';
		}
		cout << endl;
	}


}
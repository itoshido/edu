#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Программа по обнулению дробной части." << endl;
	int count;
	int count1 = 0;
	float number;
	cout << "Введите количество чисел: " << endl;
	cin >> count;
	cout << "Введите числа: " << endl;
	
	float* arr = new float[count];
	for (int i = 0; i < count; i++) {
		cin >> number;
		arr[i] = int(number);
		count1 += int(number);
	}

	cout << "Целые части чисел: ";
	for (int i = 0; i < count; i++) {
		cout << arr[i] << ' ';
	}

	cout << "Сумма чисел: " << count1 << endl;
	delete[] arr;
}
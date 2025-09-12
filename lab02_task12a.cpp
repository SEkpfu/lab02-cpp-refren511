#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, c;
	cout << "Введите три целых числа:" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	int summ = 0;
	if (a > 10) {
		summ += a;
	}
	if (b > 10) {
		summ += b;
	}
	if (c > 10) {
		summ += c;
	}
	cout << "Сумма чисел, которые > 10 =" << summ;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, c;
	cout << "Введите три целых числа:" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "Кол - во чётных чисел = " << ((a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0));
	return 0;
}
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(0, "");
	int n; double a, b;
	cout << "Введите номер действия(целое число в диапазоне 1-4) = "; cin >> n;
	cout << "Введите два вещественных числа A и B (B не должно равняться 0)" << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	if (b == 0) {
		cout << "Вы ввели 0 в число B!";
		exit;
	}
	else {
		switch (n) {
		case 1: cout << "A + B = " << a + b; break;
		case 2: cout << "A - B = " << a - b; break;
		case 3: cout << "A * B = " << a * b; break;
		case 4: cout << "A / B = " << a / b; break;
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double a, b;
	char symb;
	cout << "Введите два вещественных числа: " << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "Введите знак арифметической операции: "; cin >> symb;

	switch(symb) {
	case '+': cout << "a + b = " << a + b; break;
	case '-': cout << "a - b = " << a - b; break;
	case '*': cout << "a * b = " << a * b; break;
	default: cout << "Ошибка: введён не верный знак арифметической операции"; break;
	}
	return 0;
}
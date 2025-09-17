#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, c;
	cout << "Введите три целых числа:" << endl;
	cout << "a = "; cin >> a; int inda = 1;
	cout << "b = "; cin >> b; int indb = 2;
	cout << "c = "; cin >> c; int indc = 3;
	if (min(min(a, b), c) == a ) {
		cout << "Номер наименьшого из этих чисел = " << inda;
	}
	else if (min(min(a, b), c) == b) {
		cout << "Номер наименьшого из этих чисел = " << indb;
	}
	else {
		cout << "Номер наименьшого из этих чисел = " << indc;
	}
	return 0;
}
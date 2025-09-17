#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, c;
	cout << "Введите три целых числа:" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	if ((a > b && b > c) && (c > b && b > a)) {
		cout << "Среднее число = " << b;
	}
	else if ((b > a && a > c) || (c > a && a > b)){
		cout << "Среднее число = " << a;
	}
	else if ((a > c && c > b) || (b > c && c > a)) {
		cout << "Среднее число = " << c;
	}
	else if (a == b || a == c || c == b) {
		cout << "Среднего числа нет";
	}
	return 0;
}
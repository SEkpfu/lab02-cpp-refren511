#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double a, b, c, r, z;
	cout << "Введите данные: " << endl;
	cout << "Радиус торта = "; cin >> r;
	cout << "Высоту торта = "; cin >> z;
	cout << "Первую сторону коробки = "; cin >> a;
	cout << "Вторую сторону коробки = "; cin >> b;
	cout << "Высоту коробки = "; cin >> c;

	if ((2 * r <= a && 2 * r <= b) && (z <= c)) {
		cout << "Торт вместится в коробку";
	}
	else {
		cout << "Торт не вместится в коробку";
	}
	return 0;
}
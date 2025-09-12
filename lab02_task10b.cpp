#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y, z;
	cout << "Введите действительные положительные числа: " << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
	if ((x + y >= z) && (x + z >= y) && (y + z >= x)) {
		cout << "Треугольник с длинами сторон x, y, z существует" << endl;
		if (x == y || x == z || y == z) {
			cout << "Ещё этот треугольник равнобедренный";
		}
		else if ((pow(x, 2) + pow(y, 2) == pow(z, 2)) || (pow(z, 2) + pow(y, 2) == pow(x, 2)) ||
			(pow(x, 2) + pow(z, 2) == pow(y, 2))) {
			cout << "Ещё этот треугольник прямоугольный";
		}
		else if (x == y && y == z) {
			cout << "Ещё этот треугольник равносторонний";
		}
	}
	else {
		cout << "Треугольник с длинами сторон x, y, z  не существует";
	}
	return 0;
}
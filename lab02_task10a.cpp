#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y, z;
	cout << "Введите действительные положительные числа: " << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
	if ((x + y > z) && (x + z > y) && (y + z > x)) {
		cout << "Треугольник с длинами сторон x, y, z существует";
	}
	else {
		cout << "Треугольник с длинами сторон x, y, z  не существует";
	}
	return 0;
}
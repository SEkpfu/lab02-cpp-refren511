#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Введите действительные числа:" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if ((pow(x, 2) + pow(y, 2) >= pow(3, 2)) && (pow(x, 2) + pow(y, 2) <= pow(6, 2)) && x >= 0) {
		cout << "Точка с координатами (x, y) принадлежит заштрихованной части плоскости";
	}
	else {
		cout << "Точка с координатами (x, y) не принадлежит заштрихованной части плоскости";
	}
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Введите действительные числа:" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if ((y >= 0  && y <= 1) && (-2 <= x && x <= 0 )) {
		cout << "Точка с координатами (x, y) принадлежит заштрихованной части плоскости";
	}
	else {
		cout << "Точка с координатами (x, y) не принадлежит заштрихованной части плоскости";
	}
	return 0;
}
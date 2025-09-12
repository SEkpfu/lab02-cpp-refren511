#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Введите действительные числа:" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if ((pow(x, 2) + pow(y, 2) <= pow(5, 2)) && y >= 0) {
		cout << "Точка с координатами (x, y) принадлежит заштрихованной частик плоскости";
	}
	else {
		cout << "Точка с координатами (x, y) не принадлежит заштрихованной частик плоскости";
	}
	return 0;
}
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x;
	cout << "Введите x = "; cin >> x;
	if (x > 0) {
		double vr1 = ((2 + pow(x, 2)) / x);
		cout << vr1;
	}
	else if (-1 < x && x <= 0) {
		double vr2 = ((7.0 / 3.0) + sqrt(x + 1));
		cout << vr2;
	}
	else if (x <= -1) {
		double x_rad = (x * M_PI / 180.0);
		double vr3 = (cos(M_PI * fabs(x_rad)) / x);
		cout << vr3;
	}
	return 0;
}
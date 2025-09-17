#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x;
	double vr;
	cout << "Введите x = "; cin >> x;
	if (x > 0) {
		vr = ((2 + pow(x, 2)) / x);
	}
	else if (-1 < x && x <= 0) {
		vr = ((7.0 / 3.0) + sqrt(x + 1));
	}
	else if (x <= -1) {
		vr = (cos(M_PI * fabs(x)) / x);
	}
	cout << vr;
	return 0;
}

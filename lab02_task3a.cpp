#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x;
	cout << "Введите x = "; cin >> x;
	if (x <= -2) {
		cout << 0;
	}
	else if (-2 < x && x <= 10) {
		cout << (pow(x, 2) + 4 * x + 5);
	}
	else {
		cout << (1 / (pow(x, 2) + 4 * x - 5));
	}
	return 0;

}

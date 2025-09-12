#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Введите координаты попадания: " << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if (pow(x, 2) +  pow(y, 2) <= pow(2, 2)) {
		cout << "Выбито 10 очков";
	}
	else if ((pow(x, 2) + pow(y, 2) > pow(2, 2)) && (pow(x, 2) + pow(y, 2) <= pow(4, 2))) {
		cout << "Выбито 5 очков";
	}
	else {
		cout << "Выбито 0 очков";
	}
	return 0;
}
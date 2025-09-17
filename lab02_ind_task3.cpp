#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Введте координаты точки: " << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if ((y <= (-x/2 + 1)) && 
		(y <= x/2 + 1) && 
		(y >= (-x - 2)) && 
		(pow(x, 2) + pow(y,2) <= pow(2, 2))) {
		cout << "Точка попала в заштрихованную область";
	}
	else {
		cout << "Точка не попала в заштрихованную область";
	}
	return 0;
}
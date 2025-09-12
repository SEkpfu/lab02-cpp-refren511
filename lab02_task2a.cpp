#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a;
	cout << "Введите целое число = "; cin >> a;
	if (a > 0) {
		cout << "Это число положительное";
	}
	else if (a < 0) {
		cout << "Это число отрицательное";
	}
	else {
		cout << "Это число нуль";
	}
	return 0;
}
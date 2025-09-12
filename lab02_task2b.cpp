#include <iostream>;
using namespace std;
int main() {
	setlocale(0, "");
	int a;
	cout << "Введите целое число = "; cin >> a;
	if (a % 2 == 0) {
		cout << "Это число чётное";
	}
	else {
		cout << "Это число нечётное";
	}
	return 0;
}
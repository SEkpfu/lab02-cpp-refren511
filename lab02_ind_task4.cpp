#include <iostream>
using namespace std;
void output(int cnt) {
	if (cnt % 100 == 11 || cnt % 100 == 12 || cnt % 100 == 13 || cnt % 100 == 14) {
		cout << cnt << " ложек";
	}
	else if (cnt % 10 == 1) {
		cout << cnt << " ложку";
	}
	else if (cnt % 10 < 5 && cnt % 10 > 0) {
		cout << cnt << " ложки";
	}
	else {
		cout << cnt << " ложек";
	}
}
int main() {
	setlocale(0, "");
	int cnt;
	cout << "Введите: целое кол-во ложек = "; cin >> cnt;
	cout << "Дульсинея спрятала "; output(cnt);
	return 0;
}

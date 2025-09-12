#include <iostream>
using namespace std;

void vivod(int age) {
	if (age == 11 || age == 12 || age == 13 || age == 14) {
		cout << " лет";
	}
	else if (age % 10 < 5 && age % 10 > 0) {
		cout << " года";
	}
	else if (age % 10 == 1) {
		cout << " год";
	}
	else {
		cout << " лет";
	}
}


int main() {
	setlocale(0, "");
	cout << "Введите дату рождения (целые числа): " << endl;
	int day_bth, month_bth, year_bth;
	cout << "День = "; cin >> day_bth;
	cout << "Месяц = "; cin >> month_bth;
	cout << "Год = "; cin >> year_bth;

	cout << "Введите текущую дату (целые числа):" << endl;
	int day, month, year;
	cout << "День = "; cin >> day;
	cout << "Месяц = "; cin >> month;
	cout << "Год = "; cin >> year;

	int age;
	if (year > year_bth) {
		if (month > month_bth) {
			age = year - year_bth;
		}
		else if (month < month_bth) {
			age = year - year_bth - 1;
		}
		else {
			if (day >= day_bth) {
				age = year - year_bth;
			}
			else {
				age = year - year_bth - 1;
			}
		}
		cout << "Вам " << age; 
		vivod(age);
	}
	else {
		cout << "Ошибка: вы ввели неправильные данные или вам пока мало годиков";
	}

	return 0;
}
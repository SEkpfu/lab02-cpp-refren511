﻿#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");
    int x;  //переменная для хранения оценки 
    cout << "введите свою оценку: ";
    cin >> x;
    //оператор множественного выбора 
    switch (x) {
    case 5: cout << "отлично"; break;
    case 4: cout << "хорошо"; // при удалении break выводятся эта строка и нижняя
    case 3: cout << "удовлетворительно"; break;

    case 2:
    case 1: cout << "плохо ";  break;
    default: cout << "неверныe данные";
    }

    return 0;
}
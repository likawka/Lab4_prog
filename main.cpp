#include <iostream>

#include "NumeralSystem.h"

using namespace std;

std::ostream &operator<<(std::ostream &stream, const NumeralSystem &number) {
//    std::cout << number.number_ << "(base" << number.base_ << ")";
    std::cout << NumeralSystem::toBase(number.number_, number.base_) << "(base" << number.base_ << ", "
              << number.number_ << ")";
    return stream;
}

int main() {

    char *yn = new char(0);

    cout << endl;
    cout << "====================================================" << endl;
    cout << " Laboratory work №3, Var. 4" << endl;
    cout << " The program was made by Iryna Zinko " << endl;
    cout << endl;

    do {

        string str;
        cout << "Введіть число A" << endl;
        cin >> str;
        cout << "Введіть систему числення A" << endl;
        int base;
        cin >> base;
        NumeralSystem a(str, base);

        cout << "Введіть число B" << endl;
        cin >> str;
        cout << "Введіть систему числення B" << endl;
        cin >> base;
        NumeralSystem b(str, base);

        cout << "Значення А: " << a << endl;
        cout << "Значення B: " << b << endl;

        cout << endl;
        cout << "====================================================" << endl;
        cout << "Стандартні оператори " << endl;
        cout << "====================================================" << endl;
        cout << endl;

        cout << "Приклад: a + b = " << a + b << endl;

        cout << "Приклад: a - b = " << a - b << endl;

        cout << "Приклад: a * b = " << a * b << endl;

        cout << "Приклад: a / b = " << a / b << endl;

        cout << endl;
        cout << "====================================================" << endl;
        cout << "Короткі оператори " << endl;
        cout << "====================================================" << endl;
        cout << endl;

        cout << "Приклад: a += b; Початкове a = " << a << endl;
        a += b;
        cout << "Результат a = " << a << endl;
        cout << endl;

        cout << "Приклад: a -= b; Початкове a = " << a << endl;
        a -= b;
        cout << "Результат a = " << a << endl;
        cout << endl;

        cout << "Приклад: a *= b; Початкове a = " << a << endl;
        a *= b;
        cout << "Результат a = " << a << endl;
        cout << endl;

        cout << "Приклад: a /= b; Початкове a = " << a << endl;
        a /= b;
        cout << "Результат a = " << a << endl;
        cout << endl;

        cout << endl;
        cout << "====================================================" << endl;
        cout << "Унарний оператор мінус " << endl;
        cout << "====================================================" << endl;

        cout << "Приклад: -a = " << a << " " << (-a) << endl;

        cout << endl;
        cout << "====================================================" << endl;
        cout << "Інкремент / Декремент " << endl;
        cout << "====================================================" << endl;
        cout << endl;

        cout << "Приклад: a++; Початкове a = " << a;
        a++;
        cout << " Результат a = " << a << endl;

        cout << "Приклад: ++a; Початкове a = " << a << " Результат: " << ++a << endl;

        cout << "Приклад: a--; Початкове a = " << a;
        a--;
        cout << " Результат a = " << a << endl;

        cout << "Приклад: --a; Початкове a = " << a << " Результат: " << --a << endl;

        cout << endl;
        cout << "====================================================" << endl;
        cout << "Логічні оператори" << endl;
        cout << "====================================================" << endl;
        cout << endl;

        cout << "Приклад: a == b =" << (a == b) << endl;
        cout << endl;

        cout << "Приклад: a != b =" << (a != b) << endl;
        cout << endl;

        cout << "Приклад: a < b =" << (a < b) << endl;
        cout << endl;

        cout << "Приклад: a <= b =" << (a <= b) << endl;
        cout << endl;

        cout << "Приклад: a > b =" << (a > b) << endl;
        cout << endl;

        cout << "Приклад: a >= b =" << (a >= b) << endl;
        cout << endl;

        cout << endl;
        cout << " Продовжити?";
        cin >> yn;
    } while (*yn == 'y');


    return 0;
}
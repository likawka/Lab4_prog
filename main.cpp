#include <iostream>

#include "NumeralSystem.h"

using namespace std;


int main() {

    char *yn = new char(0);

//    NumeralSystem ns;

    cout << endl;
    cout << "====================================================" << endl;
    cout << " Laboratory work №3, Var. 4" << endl;
    cout << " The program was made by Iryna Zinko " << endl;
    cout << endl;

    NumeralSystem a("100", 2);
    NumeralSystem b("1", 16);

    (a+b).print();

//    do {
//
//            char str[100];
//            cout << "Введіть число " << endl;
//            cin >> str;
//            cout << "Введіть систему числення " << endl;
//            int base;
//            cin >> base;
//
//            printf(" Десятковий еквівалент %s у базі %d дорівнює "
//                   " %d\n", str, base, ns.toDeci(str, base));
//
//        cout << endl;
//        cout << " Продовжити?";
//        cin >> yn;
//    } while (*yn == 'y');


    return 0;
}
#include <iostream>
#include "NumeralSystem.h"

using namespace std;


int main() {

    char *yn = new char(0);

    NumeralSystem ns;

    cout << endl;
    cout << "====================================================" << endl;
    cout << " Laboratory work №3, Var. 4" << endl;
    cout << " The program was made by Iryna Zinko " << endl;
    cout << endl;

    do {

        double a;
        char s[100] = { 0 };
        int base;
        cout << "Введіть число: ";
        cin >> a;
        cout << "Введіть систему числення: ";
        cin >> base;
        int k = ns.iint((int)a, base, s);
        s[k++] = ',';
        ns.ddouble(a-(int)a, base, &s[k]);
        cout << s;
        cout << endl;


        cout << " Продовжити?";
        cin >> yn;
    } while (*yn == 'y');


    return 0;
}
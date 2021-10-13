//
// Created by Iryna Zinko on 10/13/21.
//

#include <stdexcept>
#include <iostream>

#include "NumeralSystem.h"

int NumeralSystem::toNumber(int num){
    if (num >= '0' && num <= '9')
        return (int)num - '0';
    else
        return (int)num - 'A' + 10;

}

int NumeralSystem::iint(int a, int base, char *s)
{
    int num = (int)a;
    int rest = num % base;
    num /= base;
    if (num == 0)
    {
        s[0] = toNumber(rest); return 1;
    }
    int k = iint(num, base, s);
    s[k++] = toNumber(rest);
    return k;
}

void NumeralSystem::ddouble(double a, int base, char *s)
{
    int iter = 0;
    int k = 0;
    double a1 = a;
    do {
        a1 = a1 * base;
        int num = (int)(a1);
        s[k++] = toNumber(num);
        a1 -= (int)a1;
        iter++;
    } while (a1 > 0.00000001 && iter < 10);

}
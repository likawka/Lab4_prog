//
// Created by Iryna Zinko on 10/13/21.
//

#include <stdexcept>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "NumeralSystem.h"


int NumeralSystem::val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int NumeralSystem::toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1;
    int num = 0;
    int i;

    for (i = len - 1; i >= 0; i--)
    {
        if (val(str[i]) >= base)
        {
            printf("Invalid Number");
            return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}
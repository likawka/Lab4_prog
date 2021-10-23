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

int NumeralSystem::toDeci(const std::string& number, int base)
{
    int len = number.length();
    int power = 1;
    int num = 0;
    int i;

    for (i = len - 1; i >= 0; i--)
    {
        if (val(number[i]) >= base)
        {
            printf("Invalid Number");
            return -1;
        }

        num += val(number[i]) * power;
        power = power * base;
    }

    return num;
}

NumeralSystem::NumeralSystem(const std::string &number, int base):
    base_(base),
    number_(toDeci(number, base)) {

}

NumeralSystem NumeralSystem::operator+(const NumeralSystem& other) {
    int sum = number_ + other.number_;
    return NumeralSystem(std::to_string(sum), 10);
}

void NumeralSystem::print() {
    std::cout << number_ << "(base" << base_ << ")";
}
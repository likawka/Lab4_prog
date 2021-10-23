//
// Created by Iryna Zinko on 10/13/21.
//

#include <stdexcept>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "NumeralSystem.h"


//int NumeralSystem::val(char c)
//{
//    if (c >= '0' && c <= '9')
//        return (int)c - '0';
//    else
//        return (int)c - 'A' + 10;
//}
//
//int NumeralSystem::toDeci(const std::string& number, int base)
//{
//    int len = number.length();
//    int power = 1;
//    int num = 0;
//    int i;
//
//    for (i = len - 1; i >= 0; i--)
//    {
//        if (val(number[i]) >= base)
//        {
//            printf("Invalid Number");
//            return -1;
//        }
//
//        num += val(number[i]) * power;
//        power = power * base;
//    }
//
//    return num;
//}

NumeralSystem::NumeralSystem(const std::string &number, int base, int baseAfterConversion):
    base_(base),
    number_(std::strtol(number.c_str(), 0, base)) {
    if (baseAfterConversion > 0) {
        base_ = baseAfterConversion;
    }
}

NumeralSystem NumeralSystem::operator+(const NumeralSystem& other) {
    int sum = number_ + other.number_;
    return NumeralSystem(std::to_string(sum), 10, base_);
}

NumeralSystem NumeralSystem::operator-(const NumeralSystem& other){
    int res = number_ - other.number_;
    return NumeralSystem(std::to_string(res), 10, base_);

}

NumeralSystem NumeralSystem::operator*(const NumeralSystem &other) {
    int res = number_ * other.number_;
    return NumeralSystem(std::to_string(res), 10, base_);
}

NumeralSystem NumeralSystem::operator/(const NumeralSystem &other) {
    int res = number_ / other.number_;
    return NumeralSystem(std::to_string(res), 10, base_);
}


NumeralSystem& NumeralSystem::operator+=(const NumeralSystem &other) {
    number_ += other.number_;
    return *this;
}

NumeralSystem& NumeralSystem::operator-=(const NumeralSystem &other) {
    number_ -= other.number_;
    return *this;
}

NumeralSystem& NumeralSystem::operator*=(const NumeralSystem &other) {
    number_ *= other.number_;
    return *this;
}

NumeralSystem& NumeralSystem::operator/=(const NumeralSystem &other) {
    number_ /= other.number_;
    return *this;
}


NumeralSystem NumeralSystem::operator-() {
    return NumeralSystem("0", 10) - (*this);

}

NumeralSystem& NumeralSystem::operator++() {
    number_++;
    return *this;
}

NumeralSystem NumeralSystem::operator++(int _) {
    NumeralSystem temp = *this;
    ++*this;
    return temp;
}

NumeralSystem& NumeralSystem::operator--() {
    number_--;
    return *this;
}

NumeralSystem NumeralSystem::operator--(int _) {
    NumeralSystem temp = *this;
    --*this;
    return temp;
}

bool NumeralSystem::operator==(const NumeralSystem &other) {
    return number_ == other.number_;
}

bool NumeralSystem::operator!=(const NumeralSystem &other) {
    return !((*this) == other);
}

bool NumeralSystem::operator<(const NumeralSystem &other) {
    return number_ < other.number_;
}

bool NumeralSystem::operator<=(const NumeralSystem &other) {
    return (*this == other) || (*this < other);
}

bool NumeralSystem::operator>(const NumeralSystem &other) {
    return number_ > other.number_;
}

bool NumeralSystem::operator>=(const NumeralSystem &other) {
    return (*this == other) || (*this > other);
}

std::string NumeralSystem::toBase(int value, int base) {
    if (value == 0) return "0";
    std::string result;
    while (value != 0) {
        int digit = value % base;
        result += (digit > 9 ? 'A' + digit - 10 : digit +'0');
        value /= base;
    }
    std::reverse(result.begin(), result.end());
    return result;
}
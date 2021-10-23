//
// Created by Iryna Zinko on 10/13/21.
//

#pragma once

class NumeralSystem {
private:
//    int val(char c);
//    int toDeci(const std::string& number, int base);

    int base_;
    int number_;

public:

    NumeralSystem(const std::string& number, int base, int baseAfterConversion = 0);
    static std::string toBase(int value, int base);

    // standard
    NumeralSystem operator+(const NumeralSystem& other);
    NumeralSystem operator-(const NumeralSystem& other);
    NumeralSystem operator*(const NumeralSystem& other);
    NumeralSystem operator/(const NumeralSystem& other);

    // short
    NumeralSystem& operator+=(const NumeralSystem& other);
    NumeralSystem& operator-=(const NumeralSystem& other);
    NumeralSystem& operator*=(const NumeralSystem& other);
    NumeralSystem& operator/=(const NumeralSystem& other);

    // unary
    NumeralSystem operator-();

    //incr\decr
    NumeralSystem& operator++();
    NumeralSystem operator++(int);


    NumeralSystem& operator--();
    NumeralSystem operator--(int);

    //comparison
    bool operator==(const NumeralSystem& other);
    bool operator!=(const NumeralSystem& other);

    bool operator<(const NumeralSystem& other);
    bool operator<=(const NumeralSystem& other);

    bool operator>(const NumeralSystem& other);
    bool operator>=(const NumeralSystem& other);


    friend std::ostream& operator<< (std::ostream& stream, const NumeralSystem& number);
    void print();
};




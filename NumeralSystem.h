//
// Created by Iryna Zinko on 10/13/21.
//

#pragma once

class NumeralSystem {
private:
    int val(char c);
    int toDeci(const std::string& number, int base);

    int base_;
    int number_;

public:

    NumeralSystem(const std::string& number, int base);
    NumeralSystem operator+(const NumeralSystem& other);

    void print();
};




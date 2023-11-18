#pragma once
class Fraction {
public:
    int numerator1{}, denominator1{};
    int numerator2{}, denominator2{};
    char operation{};

    void inputFractions();
    void addFraction(int& numerator, int& denominator);
    void subtractFraction(int& numerator, int& denominator);
    void multiplyFraction(int& numerator, int& denominator);
    void divideFraction(int& numerator, int& denominator);
    void calculateResult(int& numerator, int& denominator);
    void returnResult(int& numerator, int& denominator);
};
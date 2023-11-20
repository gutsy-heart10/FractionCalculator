#include<iostream>
#include"Fraction.h"
using namespace std;

int main() {
    system("color 5");
    Fraction fraction;
    fraction.inputFractions();
    int resultNumerator, resultDenominator;
    fraction.calculateResult(resultNumerator, resultDenominator);
    system("cls");
    fraction.returnResult(resultNumerator, resultDenominator);
    return 0;
}
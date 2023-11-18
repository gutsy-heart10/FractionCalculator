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
    cout << "Result: " << resultNumerator << '/' <<resultDenominator << endl;
    return 0;
}
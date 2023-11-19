#include<iostream>
#include"Fraction.h"
using namespace std;
void Fraction::inputFractions() {
    cout << "Enter the numerator of the first fraction: ";
    cin >> numerator1;
    cout << "Enter the denominator of the first fraction: ";
    cin >> denominator1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the numerator of the second fraction: ";
    cin >> numerator2;
    cout << "Enter the denominator of the second fraction: ";
    cin >> denominator2;
}
    
void Fraction::returnResult(int& numerator, int& denominator) {
    if (numerator < 0)
    {
        numerator *= -1;
        denominator *= -1;
    }

    if (numerator == denominator) {
        denominator = 1;
    }
    else {
        int nod = 1;
        for (int i = 2; i <= (numerator < denominator ? numerator : denominator); i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                nod = i;
            }
        }
        numerator /= nod;
        denominator /= nod;
    }
}

void Fraction::addFraction(int& resultNumerator, int& resultDenominator) {
    resultNumerator = (numerator1 * denominator2) + (numerator2 * denominator1);
    resultDenominator = denominator1 * denominator2;
    returnResult(resultNumerator, resultDenominator);
}

void Fraction::subtractFraction(int& resultNumerator, int& resultDenominator) {
    resultNumerator = (numerator1 * denominator2) - (numerator2 * denominator1);
    resultDenominator = denominator1 * denominator2;
    returnResult(resultNumerator, resultDenominator);
}

void Fraction::multiplyFraction(int& resultNumerator, int& resultDenominator) {
    resultNumerator = numerator1 * numerator2;
    resultDenominator = denominator1 * denominator2;
    returnResult(resultNumerator, resultDenominator);
}

void Fraction::divideFraction(int& resultNumerator, int& resultDenominator) {
    resultNumerator = numerator1 * denominator2;
    resultDenominator = denominator1 * numerator2;
    returnResult(resultNumerator, resultDenominator);
}

void Fraction::calculateResult(int& resultNumerator, int& resultDenominator) {
    switch (operation) {
    case '+':
        addFraction(resultNumerator, resultDenominator);
        break;
    case '-':
        subtractFraction(resultNumerator, resultDenominator);
        break;
    case '*':
        multiplyFraction(resultNumerator, resultDenominator);
        break;
    case '/':
        divideFraction(resultNumerator, resultDenominator);
        break;
    default:
        cout << "Invalid operator." << endl;
        resultNumerator = 0;
        resultDenominator = 1;
    }
}

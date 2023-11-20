#include<iostream>
#include"Fraction.h"
using namespace std;

int main() {
    system("color 5");
    Fraction fraction;
    char select;
    do
    {
    fraction.inputFractions();
    int resultNumerator, resultDenominator;
    fraction.calculateResult(resultNumerator, resultDenominator);
    system("cls");
    fraction.returnResult(resultNumerator, resultDenominator);
    cout << "Do you want to perform another operation? (y/n): ";
    cin >> select;
    } while (select == 'y' || select == 'Y');
     return 0;
}
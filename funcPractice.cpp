// funcPractice.cpp
// program for testing out things with functions
// By JK

#include <iostream>
using namespace std;

const double SALES_TAX = 0.075;

// function that computes the sales tax on the subtotal
double computeTax(double subTotal, double taxRate = SALES_TAX);

int main() 
{
    double subTotal = 10.0;
    double total = subTotal + computeTax(subTotal);
    double total2 = subTotal + computeTax(subTotal, 0.06);

    cout << "Total: " << total << "\n";
    cout << "Total2: " << total << endl;
}

double computeTax(double subTotal, double taxRate = SALES_TAX) {
    return subTotal * taxRate;
}
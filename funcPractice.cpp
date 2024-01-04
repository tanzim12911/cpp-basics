// funcPractice.cpp
// program for testing out things with functions
// By JK

#include <iostream>
using namespace std;

const double SALES_TAX = 0.075;

// function that computes the sales tax on the subtotal
double computeTax(double subTotal);

int main() 
{
    double subTotal = 10.0;
    double total = subTotal + computeTax(subTotal);

    cout << "Total: " << total << endl;
}

double computeTax(double subTotal) {
    return subTotal * SALES_TAX;
}
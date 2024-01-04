// funcPractice2.cpp
// program for testing out things with functions
// By JK

#include <iostream>
using namespace std;

const double SALES_TAX = 0.075;

// function that computes the sales tax on the subtotal
void computeTax(double subTotal, double& tax, double& total, double taxRate = SALES_TAX);

int main() 
{
    double subTotal = 10.0;
    double tax = 0;
    double total = 0;

    cout << "Total: " << total << "\n";
    cout << "Tax: " << tax << endl;
}

void computeTax(double subTotal, double& tax, double& total, double taxRate) {
    tax = subTotal * taxRate;
    total = subTotal + tax;
}
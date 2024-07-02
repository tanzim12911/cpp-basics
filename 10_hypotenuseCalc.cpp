#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter value of a: ";
    std::cin >> a;

    std::cout << "Enter value of b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Hypotenuse: " << c;

}
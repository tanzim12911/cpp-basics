#include <iostream>
#include <cmath>

int main() {
    
    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 4);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);  round up
    z = floor(x); // round down

    std::cout << z;

    return 0;
}
#include <iostream>

int main() {

    // type conversion = conversion a value of one data type to another
    //                      Implicit = automatic
    //                      Explicit = Precede value with new data type (int)

    double x = (int) 3.14;

    char c = 100;

    std::cout << x << '\n';

    std::cout << c << '\n';

    return 0;
}
#include <iostream>

int main() {

    // do while loop = do some block of code first,
    //                 THEN repeat again if condition is true

    int number;

    while(number < 0) {
        std::cout << "Enter a positive a number: ";
        std::cin >> number;
    }

    std::cout << "The # is " << number;

}
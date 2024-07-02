#include <iostream>

int main() {
    
    // pseudo-random = NOT truly random (but close)
    // intialize random number generator [srand(time(NULL));]
    // rand() % last_num + first_num;

    srand(time(NULL));

    int num1 = rand() % 6 + 1;
    int num2 = rand() % 6 + 1;
    int num3 = rand() % 6 + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num2 << '\n';

    return 0;
}
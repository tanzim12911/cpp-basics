#include <iostream>

int myNum = 3;  // Better not to use GLOBAL variable as its pollute global namespace & less secure

void printNum();

int main() {

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions
    // A function will use any LOCAL variable first before resorting to any GLOBAL variable

    int myNum = 1;

    std::cout << myNum << '\n';

    std::cout << ::myNum << '\n';       /// use scope-resolution operator to use global version

    printNum();
}

void printNum() {
    std::cout << myNum;
}
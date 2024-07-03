#include <iostream>

int myNum = 3;

void printNum();

int main() {

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;

    std::cout << myNum;

    printNum();
}

void printNum() {
    std::cout << myNum;
}
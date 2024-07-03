#include <iostream>

void printNum(int myNum);

int main() {

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;

    std::cout << myNum;
}

void printNum(int myNum) {
    std::cout << myNum;
}
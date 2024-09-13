#include <iostream>

int main() {

    // dynamic memory = memory that is allocated after the program 
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;

    char *pGrades = nullptr;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[5];

    return 0;
}
#include <iostream>

int main() {

    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases.

    char grade;
    
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good!";
            break;
        case 'C':
            std::cout << "You did okay!";
            break;
        case 'D':
            std::cout << "You did not do good!";
            break;
        case 'F':
            std::cout << "You FAILED!";
            break;
        default:
            std::cout << "Please enter only in letter grade (A-F)";
        
    }
}
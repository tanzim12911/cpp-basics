#include <iostream>

int main() {

    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    /*
        order : 1.parenthesis
                2.multiplication & division
                3.addition & subtraction
    */

    int students = 20;

    //students = students + 1;
    //students++;
    //students += 2;
    
    //students--;

    //students = students * 2;
    //students *= 2;
    
    //students = students / 2;
    //students /= 2

    int remainder = students % 2;  // {mod (%) gives you remainder}

    std::cout << students << '\n';
} 
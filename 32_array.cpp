#include <iostream>

int main() {

    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    cars[0] = "Camaro";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    
    
    double prices[4];

    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;




    return 0;
}
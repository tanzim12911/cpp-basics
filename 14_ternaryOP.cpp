#include <iostream>

int main() {

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    /*
        int grade = 75;

        (grade >=60) ? std::cout << "You passed!" : std::cout << "Your FAILED!"; 
    */

   int number = 8;

   (number % 2 == 0) ? std::cout << "Even" : std::cout << "Odd";

   bool hungry = true;

   //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
   std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}
#include <iostream>

void happyBirthday(std::string name);

int main() {
    
    // function = a block of reusable code

    std::string name = "Bro";

    happyBirthday(name);
}

void happyBirthday(std::string name) {
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';

}
#include <iostream>

void happyBirthday(std::string name, int age);

int main() {
    
    // function = a block of reusable code
    int age = 21;
    std::string name = "Bro";

    happyBirthday(name, age);
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old\n";

}
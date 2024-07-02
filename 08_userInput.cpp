#include <iostream>

// cout << {insertion operator}
// cin >> {extraction operator} [can take string till space as input]
// std::getline(std::cin, variable); [for taking string w/space]

int main() {

    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin, name);

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";
}
#include <iostream>

void printInfo(const std::string &name, const int &age);

int main() {

    // const parameter = parameter that uis effectively read-only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, const int &age) {
    
    std::cout << name << '\n';
    std::cout << age << '\n';
}
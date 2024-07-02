#include <iostream>

// .lenght()
// .empty()

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty()) {
        std::cout << "You didn't enter your name\n";
    }

    else if(name.length() > 12) {
        std::cout << "Your name can't be over 12 characters";
    }
    else {
        std::cout << "Welcome " << name;
    }
    

    return 0;

}
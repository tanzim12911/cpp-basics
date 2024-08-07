#include <iostream>

int main() {

    // .length()                    [Find string length]
    // .empty()                     [Checks if string is empty or not]
    // .clear()                     [Erases string] 
    // .at(index)                   [Return the character at the index]
    // .erase(index1, index2)       [Erased from, to index of the string]
    // .append("string")            [appends]
    // .find()                      [Returns index of the searched character]

    
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty()) {
        std::cout << "You didn't enter your name\n";
    }

    else if(name.length() > 12) {
        std::cout << "Your name can't be over 12 characters\n";
    }
    else {
        std::cout << "Welcome " << name << '\n';
    }

    name.append("@gmail.com");
    std::cout << "Your username is " << name << '\n';

    std::cout << name.at(1) << '\n';

    name.insert(0, "#");
    std::cout << name << '\n';


    

    return 0;

}
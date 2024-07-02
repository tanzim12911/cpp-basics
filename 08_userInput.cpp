#include <iostream>

// cout << {insertion operator}
// cin >> {extraction operator} [can take string till space as input]
// std::getline(std::cin, variable); [for taking string w/whitespace]

int main() {

    std::string name;
    int age;

    std::cout << "What's your age? ";
    std::cin >> age;                                            // when we use cin followed by getline, there's a '\n' character in 
                                                                // the input buffer and we dont pick the character so when we get to
    std::cout << "What's your full name?: ";                    // getline, it accepts the '\n' thats still within the buffer
    std::getline(std::cin >> std::ws, name);                    // so we add [>> std::ws] after cin

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}
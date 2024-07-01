#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {

    // Namespace = provide a solution for preventing name conflicts 
    //             in large projects. Each entity needs a unique name.
    //             a namespace allows for identically named entities 
    //             as long as the namespaces are different.

    int x = 0;

    std::cout << x << '\n';
    
    std::cout << first::x; // the two-colons is known as the scope-resolution op


    return 0;
}
#include <iostream>

int main() {

    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value,
    //              that pointer is not poointing at anything (null pointer)

    // nullptr = keyword that represents a null pointer literal

    // nullpts are helpful when determining if an address
    // was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr) {
        std::cout << "address was not assigned\n";
    }
    else {
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }



    return 0;
}
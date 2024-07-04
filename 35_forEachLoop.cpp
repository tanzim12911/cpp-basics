#include <iostream>

int main() {

    // foreach loop = loop that eases the traversal over an
    //                iterable data set [Less flexible, use when need to display the elements of an array]

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    int grades[] = {65, 72, 81, 93};

    for(std::string student : students) {
        std::cout << student << '\n';
    }

    for(int x : grades) {
        std::cout << x << '\n';
    }

    return 0;
}
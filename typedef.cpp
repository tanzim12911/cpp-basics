#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

int main() {

    // typedef = reserved keyword used to create an additional name
    //           (alis) for another data type.
    //           New identifier for an exitsing type
    //           Helps with readablity and redces typos

    
    //std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist;

    //std::string firstName = "Bro";
    text_t firstName = "Bro";

    std::cout << firstName;

    return 0; 
}
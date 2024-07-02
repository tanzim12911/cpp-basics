#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
//typedef int number_t;
using number_t = int;

int main() {

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an exitsing type
    //           Helps with readablity and redces typos

    /*
        Use when there is a clear benefit
        Replaced with 'using' (work better 2/ templates)
    */

    
    //std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist;

    //std::string firstName = "Bro";
    text_t firstName = "Bro";

    std::cout << firstName << '\n';

    number_t age = 21;

    std::cout << firstName << " " << age << '\n';

    return 0; 
}
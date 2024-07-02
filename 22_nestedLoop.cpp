#include <iostream>

int main() {
    
    /*
        loop() {
            loop() {

            }
        }
    */

   for (int i = 0; i < 3; i++) {

        for (int j = 1; j <= 10; j++) {
            std::cout << j << ' ';
        }
        
        std::cout << '\n';
   }
}
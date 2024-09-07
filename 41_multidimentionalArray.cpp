#include <iostream>

// If you initialize 2D array then you don't need to set row size

int main() {

    std::string cars[][4] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++) {
        
        for(int j = 0; j < cols; j++) {

            std::cout << cars[i][j] << " ";
        }

        std::cout << '\n';

    }
         

    return 0;
}
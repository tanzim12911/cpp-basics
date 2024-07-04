#include <iostream>

double getTotal(double prices[], int size);

int main() {

    double prices[] = {49.99, 15.05, 75, 9.99};

    int size = sizeof(prices) / sizeof(prices[0]);

    double total = getTotal(prices, size); // to pass an array to a function need to pass array name only

    std::cout << "$" << total;

    return 0;


}

double getTotal(double prices[], int size) {    // when a function receives an array it decays into a pointer
    double total = 0;                           // and function no longer knows what the size of the array is

    for(int i = 0; i < size; i++) {             
        total += prices[i];
    }

    return total;
}
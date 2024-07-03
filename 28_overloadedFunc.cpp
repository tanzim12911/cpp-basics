#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);

int main() {
    
    // Functioins with same name but different parameters

    bakePizza("pepperoni");
}

void bakePizza() {
    std::cout << "Here is your pizza \n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your pizza " << topping1 << " pizza!\n";
}
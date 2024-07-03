#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);

int main() {
    
    // Functions can have same name, but different parameters

    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");
}

void bakePizza() {
    std::cout << "Here is your pizza \n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your pizza " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your pizza " << topping1 << " and " << topping2 << " pizza!\n";
}
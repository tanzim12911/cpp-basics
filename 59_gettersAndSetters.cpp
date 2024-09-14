#include <iostream>

class Stove {
    private:
        int temperature = 0;

    public:
    Stove(int temperature) {
        setTemperatue(temperature);
    }

    int getTemperature() {
        return temperature;
    }
    void setTemperatue(int temperature) {
        if(temperature < 0) {
            this->temperature = 0;
        }
        else if(temperature >= 10) {
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
    
};

int main() {

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE

    Stove stove(0);

    //stove.temperature = 1000000;
    stove.setTemperatue(10000000);

    std::cout << "The temperature setting is " << stove.getTemperature();

    return 0;
}
#include <iostream>

struct Car {
    std::string brand;
    int cost;
};

int main() {
    std::cout << std::endl;
    
    Car c;
    c.brand = "Tesla";
    c.cost = 75000;

    std::cout << c.brand << " $" << c.cost << "\n";

    std::cout << std::endl;
    return 0;
}
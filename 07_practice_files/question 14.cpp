#include <iostream>

struct Car {
    std::string brand;
};

void print(Car &c) {
    std::cout << c.brand << "\n";
}

int main() {
    std::cout << std::endl;

    Car c1;
    c1.brand = "Tesla";
    print(c1);

    std::cout << std::endl;
    return 0;
}
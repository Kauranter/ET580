// s. trowbridge
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"

int main() {
    std::cout << std::endl;

    Square s1{};
    Square s2{2};
    s1.setSide(10);
    std::cout << s1.getSide() << "\n";
    print(s2);
    std::cout << "\n";

    Triangle t1{};
    Triangle t2{4,5};
    t1.setBase(10);
    t1.setHeight(20);
    std::cout << t1.getBase() << " " << t1.getHeight() << "\n";
    print(t2);
    std::cout << "\n";    

    Rectangle r1{};
    Rectangle r2{10,20};
    r1.setLength(10);
    r1.setWidth(20);
    std::cout << r1.getLength() << " " << r1.getWidth() << "\n";
    print(r2);
    std::cout << "\n";    

    std::cout << std::endl;
    return 0;
}
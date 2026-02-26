#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

class Triangle {
private:
    int base, height;
public:
    Triangle();
    Triangle(int b, int h);
    int getBase();
    int getHeight();
    void setBase(int b);
    void setHeight(int h);
    float area();
};

void print(Triangle &t);

#endif
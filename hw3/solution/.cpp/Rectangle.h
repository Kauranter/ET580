#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {
private:
    int length, width;
public:
    Rectangle();
    Rectangle(int l, int w);
    int getWidth();
    int getLength();
    void setWidth(int w);
    void setLength(int l);
    int area();
};
void print(Rectangle &r);

#endif

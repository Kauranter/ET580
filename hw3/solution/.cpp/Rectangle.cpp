#include "Rectangle.h"

Rectangle::Rectangle(): length(1), width(1)
{

}
Rectangle::Rectangle(int l, int w): length(l), width(w)
{

}
int Rectangle::getWidth()
{
    return width;
}
int Rectangle::getLength()
{
    return length;
}
void Rectangle::setWidth(int w)
{
    width = w;
}
void Rectangle::setLength(int l)
{
    length = l;
}   
int Rectangle::area()
{
    return length * width;
}

void print(Rectangle &r)
{
    std::cout << r.area() << "\n";    
}
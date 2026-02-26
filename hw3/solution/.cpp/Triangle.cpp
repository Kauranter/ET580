#include "Triangle.h"

Triangle::Triangle(): base(1), height(1)
{

}
Triangle::Triangle(int b, int h): base(b), height(h)
{

}
int Triangle::getBase()
{
    return base;
}
int Triangle::getHeight()
{
    return height;
}
void Triangle::setBase(int b)
{
    base = b;
}
void Triangle::setHeight(int h)
{
    height = h;
}
float Triangle::area() 
{
    return .5 * base * height;
}

void print(Triangle &t)
{
    std::cout << t.area() << "\n";
}
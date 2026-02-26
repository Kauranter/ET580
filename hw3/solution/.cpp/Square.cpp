#include "Square.h"

Square::Square(): side(1)
{

}
Square::Square(int s): side(s)
{

}
int Square::area() 
{ 
    return side * side; 
}
int Square::getSide()
{
    return side;
}
void Square::setSide(int s)
{
    side = s;
}
void print(Square &s)
{
    std::cout << s.area() << "\n";
}
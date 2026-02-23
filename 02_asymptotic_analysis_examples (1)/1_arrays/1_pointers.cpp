// S. Trowbridge 2024
#include <iostream>

int main() 
{
    std::cout << std::endl;

    int i = 5;                               
    int *p = &i;                             // p -> i (store memory address of i in p, therefore we say p points to i)

    std::cout << i << " " << &i << "\n\n";   // print value and memory address of i

    std::cout << i << " " << p << "\n\n";    // print value of i and p ( note that the value of p == &i )

    std::cout << &i << " " << &p << "\n\n";  // print memory address of i and p ( note that the location of p != location of i )

    std::cout << i << " " << *p << "\n\n";   // print value of i ( dereference p to read i )

    *p = 10;                                 // dereference p to modify i

    std::cout << i << " " << *p << "\n";     // print value of i ( dereference p to read i )

    std::cout << std::endl;
    return 0;
}

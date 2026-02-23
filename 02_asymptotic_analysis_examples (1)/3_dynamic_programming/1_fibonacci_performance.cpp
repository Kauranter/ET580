// S. Trowbridge 2024
#include <iostream>

/*
    Computing fibonnaci(n) results in a binary tree approaching 2^n function calls:

                f(4)                level 0, 2^0 == 1 function call   
              /      \                     
          f(3)        f(2)          level 1, 2^1 == 2 more function calls 
         /    \      /    \              
       f(2)   f(1) f(1)   f(0)      level 2, 2^2 == 4 more function calls
      /    \                            
    f(1)  f(0)                      level 3, 2^3 == 8 more function calls 

*/

long long counter = 0;                              // global variable

long fibonacci(int n)                               // exponential time complexity O(2^n)
{
    ++counter;                                      // count the number of function calls  
    if(n<2) { return n; }
    return fibonacci(n-1) + fibonacci(n-2);         // n ( number of values to compute ) determines the total number of operations
}

int main( ) 
{
    std::cout << std::endl;
 
    std::cout << fibonacci(30) << "\n";             // visibly fast computation
    std::cout << counter << " function calls\n\n";   
 
    std::cout << fibonacci(45) << "\n";             // visibly slow computation
    std::cout << counter << " function calls\n\n";                

    std::cout << std::endl;
    return 0;
}
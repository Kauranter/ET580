// S. Trowbridge 2024
#include <iostream>

/*
    array indexes: 0    1    2    3    4    5               // indexes: 0 to size-1
    array data:    10   20   30   40   50   60              // memory address of 1st value == memory address of the array
    memory:        3010 3014 3018 301c 3020 3024            // integer uses 4 bytes of memory
*/
int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;                                     // maximum values
    int nums[SIZE] = {10,20,30,40,50,60};                   // initialize an array of size values
    std::cout << sizeof(nums) << " bytes\n";                // print memory use in bytes

    for(int i=0; i<SIZE; ++i) {                             // print array values
        std::cout << nums[i] << " " << &(nums[i]) << "\n";
    }
    std::cout << "\n";


    int *p = nums;                                          // store array address into p
    std::cout << sizeof(p) << " bytes\n";                   // print memory use of a pointer

    for(int i=0; i<SIZE; ++i) {                             // print array values by pointer
        std::cout << p[i] << " " << &(p[i]) << "\n";
    }
    std::cout << "\n";

    std::cout << std::endl;    
    return 0;
}

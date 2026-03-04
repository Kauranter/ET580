#include <iostream>

//#define NDEBUG                                    // uncomment this to DISABLE assertion checking (when program is ready for distribution)
#include <cassert>                                  // include <cassert> when using assertions

void print(int *a, int size, int index) {   
    assert(index >= 0 && index < size);              // assertion: terminate program with a runtime error if the condition is false                      
    std::cout << a[index] << "\n";              
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 5;                      
    int nums[SIZE] = {1,2,3,4,5};

    print(nums, SIZE, 3);
    print(nums,SIZE, 10);                           // causes the assertion to throw a runtime error (10 > SIZE)

    std::cout << std::endl;
    return 0;
}

#include <iostream>
#include <cassert>                                  

void print(int *a, const int & size, int index) {   // size is const reference because it should be changed inside the function (read only)
    assert(index >= 0 && index < size);                                   
    std::cout << a[index] << "\n";   
    //++size;                                       // compiler error: modifying a const reference parameters causes a compiler error           
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 5;                      
    int nums[SIZE] = {1,2,3,4,5};

    print(nums, SIZE, 3);                          

    std::cout << std::endl;
    return 0;
}

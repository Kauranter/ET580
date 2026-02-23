#include <iostream>
#include <cassert>

void printValue(int *a, int n, int i)   // O(1) constant time
{  
    assert(i >=0 && i < n);
    std::cout << a[i] << " ";           // the total number of operations is fixed (does not depend upon the value of n)
}

int main( ) 
{
    std::cout << std::endl;

    const int SIZE = 10;
    int nums[SIZE];
    for(int i=0; i<SIZE; ++i) { nums[i] = rand() % SIZE; }

    printValue(nums, SIZE, 5);

    std::cout << std::endl;
    return 0;
}

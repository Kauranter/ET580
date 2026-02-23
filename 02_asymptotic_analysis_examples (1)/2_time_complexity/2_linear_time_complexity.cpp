// S. Trowbridge 2024
#include <iostream>

void print(int *a, int n)           // O(n) linear time complexity
{
    for(int i=0; i<n; ++i) {        // n (size of the array) determines the total number of operations                        
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}

int main( ) 
{
    std::cout << std::endl;

    const int SIZE = 10;
    int nums[SIZE];
    for(int i=0; i<SIZE; ++i) { nums[i] = rand() % SIZE; }

    print(nums, SIZE);

    std::cout << std::endl;
    return 0;
}
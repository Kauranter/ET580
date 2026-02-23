// S. Trowbridge 2024
#include <iostream>

void print(int a[][10], int n)              // O(n^2) quadratic time complexity
{
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            std::cout << a[i][j] << " ";    // n * n (size of the array) determines the total number of operations
        }
        std::cout << "\n";
    }
}
int main( ) 
{
    std::cout << std::endl;

    const int SIZE = 10;
    int nums[SIZE][SIZE];
    for(int i=0; i<SIZE; ++i) { 
        for(int j=0; j<SIZE; ++j) {
            nums[i][j] = rand() % SIZE;     // store random values from 0 to size-1 inclusive
        }
    }
        
    print(nums, SIZE);

    std::cout << std::endl;
    return 0;
}
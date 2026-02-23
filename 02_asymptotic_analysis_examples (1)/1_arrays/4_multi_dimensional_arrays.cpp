// S. Trowbridge 2024
#include <iostream>
#include <cassert>

void print(int a[][3], int s1, int s2)              // parameters: array ptr, size of 1st dimension, size of 2nd dimension
{
    for(int i=0; i<s1; ++i) {         
        for(int j=0; j<s2; ++j) {
            std::cout << a[i][j] << " "; 
        }   
        std::cout << "\n";                                  
    }
    std::cout << "\n";
}
void printMem(int a[][3], int s1, int s2)           // parameters: array ptr, size of 1st dimension, size of 2nd dimension
{
    for(int i=0; i<s1; ++i) {         
        for(int j=0; j<s2; ++j) {
            std::cout << &(a[i][j]) << " "; 
        }   
        std::cout << "\n";                                  
    }
    std::cout << "\n";
}

int main() 
{
    std::cout << std::endl;

    const int S1 = 2;
    const int S2 = 3;                         
    int nums[S1][S2] = { {10,20,30}, {40,50,60} };  // two dimensional array of integers         

    print(nums, S1, S2);
    printMem(nums, S1, S2);    

    std::cout << std::endl;    
    return 0;
}

// S. Trowbridge 2024
#include <iostream>

void print(int *p, int size) 
{ 
    for(int i=0; i<size; ++i) {
        std::cout << *(p+i) << " ";             // pointer arithmetic: p[i] == *(p+i)
    }
    std::cout << "\n";
}
void printMem(int *p, int size) 
{ 
    for(int i=0; i<size; ++i) {
        std::cout << (p+i) << " ";              // pointer arithmetic: &(p[i]) == (p+i)
    }
    std::cout << "\n";    
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;
    int a[SIZE] = {10,20,30,40,50,60};

    print(a, SIZE);   
    printMem(a, SIZE); 

    std::cout << std::endl;
    return 0;
}

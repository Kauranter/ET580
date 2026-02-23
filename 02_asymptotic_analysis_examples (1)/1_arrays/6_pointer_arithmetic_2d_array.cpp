// S. Trowbridge 2024
#include <iostream>

void print(int p[][3], int rows, int cols) 
{ 
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            std::cout << *(*(p+i)+j) << " ";        // pointer arithmetic: p[i][j] == *(*(p+i)+j)
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
void printMem(int p[][3], int rows, int cols) 
{ 
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            std::cout << (*(p+i)+j) << " ";         // pointer arithmetic: &(p[i][j]) == (p+(i*j+1))
        }
    }
    std::cout << "\n";
}

int main() 
{
    std::cout << std::endl;

    const int ROWS = 2, COLS = 3;

    int a[ROWS][COLS] { {10,20,30},{40,50,60} };    // allocate a two-dimensional array

    std::cout << (a+0) << "\n";                     // (a+0) is the first address of the first dimension    
    std::cout << (a+1) << "\n\n";                   // (a+1) is the first address of the second dimension

    print(a, ROWS, COLS);
    printMem(a, ROWS, COLS);    

    std::cout << std::endl;
    return 0;
}

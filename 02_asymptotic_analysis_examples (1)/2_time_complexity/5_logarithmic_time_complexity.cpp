// S. Trowbridge 2024
#include <iostream>

/*
    Find 70 using Linear Search:   
    
    0  1  2  3  4  5  6  7  8  9 
    10 20 30 40 50 60 70 80 90 100

    10
       20
          30
             40
                50
                   60
                      70 return 6
*/
int linearSearch(int a[], int size, int value)          // linear time complexity O(n)
{    
    for(int i=0; i<size; ++i) {
        std::cout << i << " ";
        if(a[i] == value) { return i; }
    }
    return -1;
}
/*
    Find 70 using Binary Search:

    0  1  2  3  4  5  6  7  8  9 
    10 20 30 40 50 60 70 80 90 100      50 < 70 so start == middle + 1
    s           m              e

    0  1  2  3  4  5  6  7  8  9 
    10 20 30 40 50 60 70 80 90 100      80 > 70 so end == middle - 1
                   s     m     e 

    0  1  2  3  4  5  6  7  8  9 
    10 20 30 40 50 60 70 80 90 100      60 < 70 so start == middle + 1   
                   sm e     

    0  1  2  3  4  5  6  7  8  9 
    10 20 30 40 50 60 70 80 90 100      70 == 70 so return middle (6)
                      sme          
*/
int binarySearch(int a[], int size, int value)          // logarithmic time complexity O(log n)
{
    int start = 0, end = size - 1;
    while(start <= end) {
        int middle = (start+end) / 2;
        std::cout << start << " " << middle << " " << end << "\n";
        if(a[middle] == value) {
            return middle;
        } else if(a[middle] < value) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }
    return -1;
}

int main( ) {
    std::cout << std::endl;

    std::cout << "10 VALUES: \n\n";
    int *a = new int[10];                                   
    for(int i=0; i<10; ++i) { a[i] = i; }  
    std::cout << "Binary\n" << binarySearch(a, 10, 11) << "\n\n";       // 11 is not in the array ( worst case scenario )
    std::cout << "Linear\n" << linearSearch(a, 10, 11) << "\n\n";     

    std::cout << "\n100 VALUES: \n\n";
    int *b = new int[100];
    for(int i=0; i<100; ++i) { b[i] = i; }              
    std::cout << "Binary\n" << binarySearch(b, 100, 213) << "\n\n";     // 213 is not in the array  ( worst case scenario )
    std::cout << "Linear\n" << linearSearch(b, 100, 213) << "\n\n";   

    std::cout << "\n1000 VALUES: \n\n";
    int *c = new int[1000];
    for(int i=0; i<1000; ++i) { c[i] = i; }                       
    std::cout << "Binary\n" << binarySearch(c, 1000, 5152) << "\n\n";   // 5152 is not in the array  ( worst case scenario )
    std::cout << "Linear\n" << linearSearch(c, 1000, 5152) << "\n\n";               

    std::cout << std::endl;
    return 0;
}

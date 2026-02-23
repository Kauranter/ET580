// S. Trowbridge 2024
#include <iostream>

long long counter = 0;                                      // global variable

/*
    recursive top-down solution: O(n) time complexity
                    f(5)
                f(4)    f(3)
            f(3)    f(2)
        f(2)    f(1)
    f(1)    f(0)
*/
long long memoization(int n, long long *a) 
{
    ++counter;                                              // compute the number of function calls  
    //std::cout << n << "\n";      
    if(n<2) {                                               // if n is 0 or 1: return 0 or 1
        return n;
    } else if(a[n] == -1) {                                 // if nth sequence value is NOT known:
        a[n] = memoization(n-1, a) + memoization(n-2, a);   //      compute the nth sequence value, then store the answer at index n
    }
    return a[n];                                            // if nth sequence value IS known: return the nth sequence value
}
/*
    iterative bottom-up solution: O(n) time complexity
*/
long long tabulation(int n) 
{
    long long a[n+1];                                       // create an array of n+1 values and assign the first two values, 0 and 1
    a[0] = 0;
    a[1] = 1;
    for(int i=2; i<=n; i++) {                               // compute sequence values from n>=2 to n inclusive
        ++counter;                                          // compute the number of iterations
        a[i] = a[i-1] + a[i-2];                             // store the computer answer for the ith sequence value (as i counts up to n)
    }
    return a[n];                                            // return the nth sequence value
}

int main() 
{
    std::cout << std::endl;

    int n = 45;                                             // test with values >= 45
    long long a[n+1];                                       // to compute f(n) starting from 0 we need n+1 values
    for(int i=2; i<=n; i++) { a[i] = -1; }                  // default array values to -1 to indicate the array is empty

    counter = 0;                                            // set function counter to 0
    long long answer  = memoization(n, a);
    std::cout << "Answer: " << answer << std::endl; 
    std::cout << "Function Count: " << counter << "\n\n";

    counter = 0;                                            // reset function counter to 0
    answer = tabulation(n);    
    std::cout << "Answer: " << answer << std::endl;
    std::cout << "Iteration Count: " << counter << "\n";

    std::cout << std::endl;
    return 0;
}

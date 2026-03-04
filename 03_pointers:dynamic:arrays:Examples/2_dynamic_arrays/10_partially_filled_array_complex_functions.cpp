// S. Trowbridge 2026
#include <iostream>
#include <cassert>

void print(int *a, const int &size)                  
{
    for(int i=0; i<size; ++i) {         
        std::cout << a[i] << " ";       
    }
    std::cout << "\n";
}
/*
    Insert ( store a value at a specific index )

    Example: Insert 25 at index 1
    size == 4

    DATA        | GARBAGE                        
    20 30 40 50 0 0 0 0 0 0
d 
    Right Shift
       i     s-1        
    20 30 40 50 0 0 0 0 0 0
             -> 
    20 30 40 50 50 0 0 0 0 0
          -> 
    20 30 40 40 50 0 0 0 0 0
       -> 
    20 30 30 40 50 0 0 0 0 0
    
    Store 25
       i        
    20 25 30 40 50 0 0 0 0 0

    Increment Size
    DATA           | GARBAGE  
    20 25 30 40 50 0 0 0 0 0        
    size == 5
*/
void insert(int *a, const int &capacity, int &size, int value, int index)  // insert value at index
{
    assert(size >= 0 && size < capacity);       // assert: terminate program if size is invalid
    assert(index >= 0 && index <= size);        // assert: terminate program if index is invalid (note: index can be == size if you want to insert at end)
    for(int i=size-1; i>=index; --i) {          // iterate from last value down to index value
        a[i+1] = a[i];                          // copy current to next (shift right)
    }
    a[index] = value;                           // store value at specified index
    ++size;                                     // increment size                                               
}
/*
    Erase ( erase a value at a specific index )

    Example: Erase the value at index 0
    size == 5  

    DATA           | GARBAGE
    10 20 30 40 50 0 0 0 0 0

    Left Shift                                      
       i+1      s-1         
    10 20 30 40 50 0 0 0 0 0
       <-
    20 20 30 40 50 0 0 0 0 0
          <-
    20 30 30 40 50 0 0 0 0 0
             <-
    20 30 40 40 50 0 0 0 0 0    
                <-
    20 30 40 50 50 0 0 0 0 0        
    
    Decrement Size
    DATA        | GARBAGE 
    20 30 40 50 50 0 0 0 0 0      
    size == 4
*/
void erase(int *a, int &size, int index)        // erase value at index
{
    assert(index >=0 && index < size);          // assert: terminate program if index is invalid (note: index must < size to be valid)
    assert(size >= 0);                          // assert: terminate program if size is invalid
    for(int i=index+1; i<size; ++i) {           // iterate from index+1 to last value
        a[i-1] = a[i];                          // copy current value to previous value (left shift)
    }
    --size;                                     // decrement size 
}

int main() {
    std::cout << std::endl;

    const int CAPACITY = 10;                
    int nums[CAPACITY] = {10,20,30,40,50};  
    int size = 5;                           

    print(nums, size);
    std::cout << "\n";

    erase(nums, size, 0);                       // erase 10
    print(nums, size);

    insert(nums, CAPACITY, size, 25, 1);        // insert 25 between 20 and 30
    print(nums, size);

    erase(nums,size, 4);                        // erase 50
    print(nums, size);

    insert(nums, CAPACITY, size, 60, 4);        // insert 60 at the end (equivalent to push_back)
    print(nums, size);      

    std::cout << std::endl;    
    return 0;
}


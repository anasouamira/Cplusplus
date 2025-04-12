#include <iostream>
using namespace std;

int main()
{
    void *ptr;  // Declare a void pointer which can point to any data type
    float f1 = 10.5;  // Declare a float variable f1
    int x = 50;  // Declare an integer variable x

    // Pointing the void pointer to the address of f1
    ptr = &f1;
    
    // Output the pointer's address (this prints the memory address of f1)
    cout << ptr << endl;
    
    // Dereference the pointer by casting it to the correct type (float*)
    // Static cast is used here to tell the compiler that ptr points to a float
    cout << *(static_cast<float*>(ptr)) << endl;

    // Pointing the void pointer to the address of x
    ptr = &x;
    
    // Output the pointer's address (this prints the memory address of x)
    cout << ptr << endl;
    
    // Dereference the pointer by casting it to the correct type (int*)
    // Static cast is used again to tell the compiler that ptr points to an int
    cout << *(static_cast<int*>(ptr)) << endl;

    return 0;
}

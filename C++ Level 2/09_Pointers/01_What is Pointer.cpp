#include <iostream>
using namespace std;

int main()
{
    int a = 10; // Declare an integer variable 'a' and assign it the value 10

    // Print the value of 'a'
    cout << "a value = " << a << endl;

    // Print the memory address of 'a' using the address-of operator (&)
    cout << "a address = " << &a << endl;

    // Declare a pointer to an integer
    int* p;

    // Assign the address of 'a' to the pointer 'p'
    p = &a;

    // Print the value stored in the pointer (which is the address of 'a')
    cout << "Pointer Value = " << p << endl;

    return 0;
}

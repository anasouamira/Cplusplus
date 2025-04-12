#include <iostream>
using namespace std;

int main()
{
    int a = 10; // Declare an integer variable 'a' and assign it the value 10

    // Print the value and the memory address of 'a'
    cout << "a value = " << a << endl;
    cout << "a address = " << &a << endl;

    int* p;     // Declare a pointer to an integer
    p = &a;     // Assign the address of 'a' to the pointer 'p'

    // Print the address stored in the pointer (which should be the same as &a)
    cout << "Pointer Value = " << p << endl;

    // Dereference the pointer to access the value it points to
    cout << "Value of the address that p is pointing to is " << *p << endl;

    *p = 20;    // Change the value at the memory location pointed to by 'p' (which is 'a')
    
    // Now both 'a' and '*p' reflect the new value
    cout << a << endl;
    cout << *p << endl;

    a = 30;     // Change the value of 'a' directly

    // Again, both 'a' and '*p' reflect the change because 'p' points to 'a'
    cout << a << endl;
    cout << *p << endl;

    cout << endl;
    return 0;
}

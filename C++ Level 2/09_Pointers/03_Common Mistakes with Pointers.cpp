#include <iostream>
using namespace std;

int main()
{
    int x, *p;

    // ❌ Wrong!
    // p is a pointer (expects an address), but x is an integer (not an address)
    // This will cause a compilation error.
    // p = x;

    // ✅ Correct!
    // Assigning the address of x to the pointer p
    p = &x;

    // ❌ Wrong!
    // *p means "the value at the address stored in p"
    // &x is an address, so trying to store an address into *p (an int) is invalid
    // *p = &x;

    // ✅ Correct!
    // Assigning the value of x to the memory location that p points to
    *p = x;

    return 0;
}

#include <iostream>
using namespace std;

// Function to swap values using call-by-reference
void swapByRef(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

// Function to swap values using call-by-pointer
void swapByPtr(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a = 1, b = 2;

    // Display values before swapping
    cout << "Before swapping using call by reference" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swap using call by reference
    swapByRef(a, b);

    // Display values after swapping by reference
    cout << "\nAfter swapping using call by reference" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Reinitialize values for the pointer swap
    a = 1;
    b = 2;

    // Display values before swapping using pointer
    cout << "\nBefore swapping using call by pointer" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swap using call by pointer
    swapByPtr(&a, &b);

    // Display values after swapping by pointer
    cout << "\nAfter swapping using call by pointer" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // 'x' is a reference to 'a' (an alias)
    int& x = a;

    // Both will print the same address, because x is just another name for a
    cout << &a << endl;  // address of 'a'
    cout << &x << endl;  // address of 'x' (same as 'a')

    // Both will print the same value
    cout << a << endl;   // value of 'a'
    cout << x << endl;   // value of 'x' (same as 'a')

    // Pointer 'p' holds the address of 'a'
    int* p = &a;

    cout << p << endl;    // address stored in pointer p (i.e., address of 'a')
    cout << *p << endl;   // value at the address p points to (i.e., value of 'a')

    int b = 20;

    // Now, pointer 'p' is changed to point to 'b'
    p = &b;

    cout << p << endl;    // address stored in pointer p (i.e., address of 'b')
    cout << *p << endl;   // value at the address p now points to (i.e., value of 'b')

    return 0;
}

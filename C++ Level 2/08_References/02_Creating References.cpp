#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // 🔁 'x' is a reference to 'a'. It's like an alias — both refer to the same memory location.
    int & x = a;

    // 🧠 Print memory addresses — both will be the same!
    cout << &a << endl; // Address of variable 'a'
    cout << &x << endl; // Address of reference 'x' (same as 'a')

    // 🖨️ Print values
    cout << a << endl;  // 10
    cout << x << endl;  // 10

    // ✍️ Change the value using the reference
    x = 20;
    cout << a << endl;  // 20, because 'x' and 'a' are the same
    cout << x << endl;  // 20

    // ✍️ Change the value using the original variable
    a = 30;
    cout << a << endl;  // 30
    cout << x << endl;  // 30, again because they are the same

    return 0;
}

#include <iostream>
using namespace std;

// 🧠 Function1 takes an integer by **reference** using '&'.
//    This means it will modify the original variable in main().
void Function1(int &x)
{
    x++; // Increment the original variable directly
}

int main()
{
    int a = 10;

    // 🖨️ Print the value of 'a'
    cout << "Value of a : " << a << endl;

    // 🔁 Call Function1 with 'a' passed by reference
    Function1(a);

    // 🖨️ Print the modified value and check address again
    cout << "\n a after calling function1 = " << a << endl; // a is now 11
    cout << "Address of a : " << &a << endl;

    return 0;
}
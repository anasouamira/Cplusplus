#include <iostream>
using namespace std;

int main()
{
    // 🧠 'auto' tells the compiler to automatically deduce the variable type from the assigned value

    auto x = 10;  // 👈 Type deduced as int (Integer)
    auto y = 12.5;  // 👈 Type deduced as double (Floating-point)
    auto z = "Mohammed Abu-Hadhoud";  // 👈 Type deduced as const char* (C-style string / string literal)

    // ✅ Output the values
    cout << x << endl;  // Output: 10
    cout << y << endl;  // Output: 12.5
    cout << z << endl;  // Output: Mohammed Abu-Hadhoud

    return 0;
}

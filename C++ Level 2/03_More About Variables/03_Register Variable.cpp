#include <iostream>
using namespace std;

int main() {
    // 🔹 Declare a register variable
    // ✅ 'register' is a keyword that suggests to the compiler
    // to store the variable in a CPU register instead of RAM
    // for faster access.
    //
    // ⚠️ This is just a suggestion. The compiler may ignore it.
    // ⚠️ You CANNOT use the address-of operator (&) with register variables
    // because they might not have a memory address.
    //
    // 🛑 Note: 'register' is deprecated in C++17 and removed in newer standards,
    // as modern compilers handle optimization automatically.
    register int i;

    // 🔁 Loop using the register variable
    for (i = 0; i < 5; i++) {
        cout << i << endl;
    }

    // ❌ This would cause an error:
    // cout << &i;  // Cannot take address of a register variable

    return 0;
}

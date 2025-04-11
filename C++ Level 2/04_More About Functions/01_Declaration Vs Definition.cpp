#include <iostream>
using namespace std;

// ✅ Function Declaration:
// This tells the compiler that a function named `add` exists,
// and it takes two integers as parameters.
// No body is provided here, so this is just a declaration.
void add(int, int);

int main() {
    // ✅ Function call:
    // We're calling the function `add` with the arguments 10 and 20.
    // The actual logic will be defined later.
    add(10, 20);

    return 0;
}

// ✅ Function Definition:
// This is where we provide the actual body of the function.
// Now, memory is allocated and the behavior is implemented.
void add(int a, int b) {
    // This function adds two numbers and prints the result
    cout << (a + b);
}

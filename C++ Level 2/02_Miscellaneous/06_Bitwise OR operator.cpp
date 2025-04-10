#include <iostream>
using namespace std;

int main()
{
    // Declare two integers
    int a = 6;  // In binary: 0110
    int b = 3;  // In binary: 0011

    // Apply Bitwise OR operator (|)
    int result = a | b;

    // ✅ Bitwise OR operator explanation:
    // The | operator compares each bit of a and b.
    // If at least one bit is 1, the result bit is 1.
    //
    // Example:
    //    a = 6 -> 0110
    //    b = 3 -> 0011
    // -----------------
    // a | b     = 0111 -> which is 7 in decimal

    cout << "Result of a | b is: " << result << endl;

    return 0;
}
// ✅ Bitwise OR (|):
// Performs OR operation bit-by-bit.
// Result bit is 1 if **at least one** of the corresponding bits is 1.
// Often used in setting specific bits (flags) in low-level programming.

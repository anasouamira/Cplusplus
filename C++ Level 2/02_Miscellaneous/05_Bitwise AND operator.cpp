#include <iostream>
using namespace std;

int main()
{
    // Declare two integers
    int a = 6;  // In binary: 0110
    int b = 3;  // In binary: 0011

    // Apply Bitwise AND operator (&)
    int result = a & b;

    // ✅ Bitwise AND operator explanation:
    // The & operator compares each bit of a and b.
    // If both bits are 1, the result bit is 1. Otherwise, it is 0.
    //
    // Example:
    //    a = 6 -> 0110
    //    b = 3 -> 0011
    // --------------
    // a & b     = 0010 -> which is 2 in decimal

    cout << "Result of a & b is: " << result << endl;

    return 0;
}
// ✅ Bitwise AND (&):
// It performs AND operation **bit by bit** between two integers.
// Each bit in the result is 1 **only if** the corresponding bits of both operands are 1.
// Commonly used in low-level programming, masks, and performance optimizations.

#include <iostream>
using namespace std;

// ✅ Function with default arguments:
// The function takes 4 parameters: a, b, c, and d.
// The last two (c and d) have default values of 0.
// This means if you only pass two or three arguments,
// c and d will automatically be set to 0 unless specified.
int MySum(int a, int b, int c = 0, int d = 0) {
    return (a + b + c + d); // Return the total sum of all arguments
}

int main() {
    // 🧮 Example 1: Only passing 2 values
    // c and d will take their default values: 0
    cout << MySum(10, 20) << endl; // Output: 30

    // 🧮 Example 2: Passing 3 values
    // d will take its default value: 0
    cout << MySum(10, 20, 30) << endl; // Output: 60

    // 🧮 Example 3: Passing all 4 values
    // No default values are used here
    cout << MySum(10, 20, 30, 40) << endl; // Output: 100

    return 0;
}

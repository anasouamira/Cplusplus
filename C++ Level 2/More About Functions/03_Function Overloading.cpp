#include <iostream>
using namespace std;

// ✅ Function #1: Sum of two double numbers
// This function adds two double values and returns a double result.
double MySum2DoubleNumbers(double a, double b) {
    return (a + b);
}

// ✅ Function #2: Sum of two integers
// This version of MySum takes two int parameters.
int MySum2IntegerNumbers(int a, int b) {
    return (a + b);
}

// ✅ Function #3: Sum of three integers
// Another version of MySum with three int parameters.
int MySum3IntegerNumbers(int a, int b, int c) {
    return (a + b + c);
}

// ✅ Function #4: Sum of four integers
// Yet another overload with four int parameters.
int MySum4IntegerNumbers(int a, int b, int c, int d) {
    return (a + b + c + d);
}

int main() {
    // 🧪 Calling the version with two integers
    cout << MySum2IntegerNumbers(10, 20) << endl; // Output: 30

    // 🧪 Calling the version with two doubles
    cout << MySum2DoubleNumbers(10.1, 20.1) << endl; // Output: 30.2

    // 🧪 Calling the version with three integers
    cout << MySum3IntegerNumbers(10, 20, 30) << endl; // Output: 60

    // 🧪 Calling the version with four integers
    cout << MySum4IntegerNumbers(10, 20, 30, 40) << endl; // Output: 100

    return 0;
}

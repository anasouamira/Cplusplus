#include <iostream>
using namespace std;

// ✅ Overloaded function #1: Two integers
int MySum(int a, int b) {
    return a + b;
}

// ✅ Overloaded function #2: Two double values
double MySum(double a, double b) {
    return a + b;
}

// ✅ Overloaded function #3: Three integers
int MySum(int a, int b, int c) {
    return a + b + c;
}

// ✅ Overloaded function #4: Four integers
int MySum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    // 🧪 Compiler chooses the correct version based on arguments

    // Calls the int version with 2 parameters
    cout << MySum(10, 20) << endl; // Output: 30

    // Calls the double version with 2 parameters
    cout << MySum(10.1, 20.1) << endl; // Output: 30.2

    // Calls the int version with 3 parameters
    cout << MySum(10, 20, 30) << endl; // Output: 60

    // Calls the int version with 4 parameters
    cout << MySum(10, 20, 30, 40) << endl; // Output: 100

    return 0;
}

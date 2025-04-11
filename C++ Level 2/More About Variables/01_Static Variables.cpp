#include <iostream>
using namespace std;

// ✅ Function that uses a static local variable
void MyFunc() {
    // 'static' means this variable keeps its value between function calls.
    // It is initialized only once, the first time the function is called.
    static int Number = 1;

    // Print the current value of Number
    cout << "Value of Number: " << Number << "\n";

    // Increment Number for the next call
    Number++;
}

int main()
{
    // 🧪 Call the function multiple times to observe the behavior of the static variable

    MyFunc();  // Output: Value of Number: 1
    MyFunc();  // Output: Value of Number: 2
    MyFunc();  // Output: Value of Number: 3

    return 0;
}

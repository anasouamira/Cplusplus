#include<iostream>
using namespace std;

// 🧠 Function that takes two numbers, adds them, and returns the sum
int MySum(int a, int b)
{
    int s = 0;
    s = a + b;  // 🔍 You can place a breakpoint here to see a, b, and s
    return s;
}

int main()
{
    // 📦 Declaring and initializing an array
    int arr1[5] = { 200, 100, 50, 25, 30 };  // 🧠 Stored in memory block with 5 integers

    int a, b, c; // 🧠 Declared but uninitialized yet

    a = 10;      // a is assigned 10
    b = 20;      // b is assigned 20

    a++;         // Post-increment: a becomes 11
    ++b;         // Pre-increment: b becomes 21

    c = a + b;   // c = 11 + 21 = 32

    cout << a << endl;  // 📤 Output: 11
    cout << b << endl;  // 📤 Output: 21
    cout << c << endl;  // 📤 Output: 32

    // 🔁 Loop from 1 to 5
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;  // 📤 Prints the current value of i (1 to 5)

        // 🧠 'a' gets updated each iteration: a = a + a * i
        // ⚠️ Memory value of 'a' changes on every loop
        a = a + a * i;
        // 🧪 You can watch 'a' and 'i' values change here with breakpoints or a watch window
    }

    // 🔁 After loop, calling MySum with updated 'a' and 'b'
    c = MySum(a, b);  // You can place a breakpoint in MySum() to inspect these values

    cout << c;  // 📤 Output: Result of MySum

    return 0;
}

#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int MySum(int a, int b)
{
    int s = 0;
    s = a + b;
    return s;
}

int main()
{
    // Array with 5 elements
    int arr1[5] = { 200, 100, 50, 25, 30 };

    // Variable declarations
    int a, b, c;
    a = 10;
    b = 20;

    // Incrementing the values of variables
    a++;     // 'a' becomes 11
    ++b;     // 'b' becomes 21

    // Summing a and b, and storing the result in c
    c = a + b;

    cout << a << endl;  // 11
    cout << b << endl;  // 21
    cout << c << endl;  // 32

    // Loop to modify the value of a and print values of i
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
        a = a + a * i; // Modify value of a
    }

    // Using the function to calculate the sum of a and b after modification
    c = MySum(a, b);

    cout << c << endl;

    return 0;
}

/*
--------------------------------------------------------
🛠️ Explanation of Quick Watch Tool in Visual Studio (Espion rapide)
--------------------------------------------------------

🔍 **What is Quick Watch?**
Quick Watch is a debugging tool used to inspect the value of any variable or expression at a specific point during the program's execution.

✅ **What can it be used for?**
- To view the value of a variable, such as `a`
- Or a mathematical expression, like `a + b`
- Or functions, such as `MySum(a, b)`

⚙️ **How to open it?**
1. Start running your program (F5).
2. Set a breakpoint at any line, such as `c = a + b;`.
3. Right-click on the variable → Select "Quick Watch" or "Espion rapide".
4. Alternatively, use the shortcut: **Shift + F9**.

🧠 **Why is it useful?**
- To examine the values of variables during runtime without modifying the code.
- To evaluate complex expressions in real time without adding extra code.
- You can also modify variable values during debugging to test different scenarios.

⚡ **Practical Example:**
When you reach the line `c = a + b;` during debugging, you can use Quick Watch to review the values of the variables `a` and `b` at that point.
You can also monitor the expression `a + b` directly in the Quick Watch window to verify the result.

--------------------------------------------------------
*/

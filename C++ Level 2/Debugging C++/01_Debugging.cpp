#include <iostream>
using namespace std;

// This function divides two numbers and returns the result
// But it does NOT handle division by zero, which is a bug!
float Divide(float a, float b)
{
    // BUG: Dividing by zero is undefined behavior!
    // A debugger can help us find this issue when the program crashes or behaves unexpectedly.
    return a / b;
}

int main()
{
    // Debugging is the process of finding and fixing errors (bugs) in a program.
    // Let's simulate a bug here:

    float x = 10;
    float y = 0; // Intentional bug: division by zero

    // To debug this:
    // 1. Set a BREAKPOINT on the line below using your IDE or debugger.
    // 2. RUN the program in DEBUG MODE.
    // 3. STEP INTO the Divide function to check values of x and y.
    // 4. WATCH the variables and see that y = 0.
    // 5. Realize that dividing by 0 causes an issue.

    float result = Divide(x, y); // This will crash or produce 'inf' (infinity)

    // This line might not execute properly if the bug above occurs.
    cout << "Result: " << result << endl;

    return 0;
}

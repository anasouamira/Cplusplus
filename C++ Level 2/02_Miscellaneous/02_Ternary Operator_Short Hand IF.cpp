#include <iostream>
using namespace std;

int main()
{
    int age;
    // Ask the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    //Example: Basic If-Else
    age = 18;
    string result;

    // Regular if-else
    if (age >= 18)
    {
        result = "Adult";
    }
    else
    {
        result = "Minor";
    }

    // ✅ Using ternary operator to assign a result based on the condition
    // Syntax: (condition) ? (value if true) : (value if false);
    string status = (age >= 18) ? "Adult" : "Minor"; 

    // Display the result
    cout << "You are an: " << status << endl;

    // ✅ Another example: find the maximum of two numbers using ternary
    int x = 15, y = 22;

    // This line chooses the larger value between x and y
    int max = (x > y) ? x : y;

    cout << "The maximum value is: " << max << endl;

    return 0;
}

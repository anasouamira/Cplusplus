#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a vector with 5 elements: index 0 to 4
    vector<int> num{ 1, 2, 3, 4, 5 };

    try {
        // Trying to access index 5 which is out of bounds
        // This will throw an exception because .at() checks bounds
        cout << num.at(5);
    }
    catch (...) {
        // This will catch any type of exception
        // And print an error message
        cout << "Out of bound\n";
    }

    return 0;
}

/*
========================================
📚 Explanation
========================================
- `vector::at(index)` safely accesses the element at the given index.
- It performs bounds checking and throws an `out_of_range` exception
  if the index is invalid.
- In this case, `num.at(5)` is out of bounds since valid indices are 0 to 4.
- The `try-catch` block prevents the program from crashing and
  instead displays an error message.

========================================
💡 Summary of Differences: at() vs []
========================================
| Feature           | .at(index)          | [index]             |
|-------------------|---------------------|----------------------|
| Bounds checking   | ✅ Yes               | ❌ No                |
| Throws exception  | ✅ Yes (out_of_range)| ❌ No (undefined behavior) |
| Safe to use       | ✅ Safer             | ⚠️ Unsafe if not checked |

✅ Use `.at()` when safety and error handling are important.  
⚠️ Use `[index]` only when you're absolutely sure the index is valid.

*/

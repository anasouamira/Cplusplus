#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num{ 1, 2, 3, 4, 5 };

    cout << "\n\nUsing .at(i)\n";
    // .at(i) is bounds-checked and throws an exception if i is out of range.
    cout << "Element at Index 0: " << num.at(0) << endl;
    cout << "Element at Index 2: " << num.at(2) << endl;
    cout << "Element at Index 4: " << num.at(4) << endl;
    
    // The line below would cause a runtime error (out_of_range) if uncommented:
    // cout << "Element at Index 5: " << num.at(5) << endl;

    cout << "\n\nUsing [i]\n";
    // [i] does NOT do bounds checking. Accessing an invalid index is undefined behavior.
    cout << "Element at Index 0: " << num[0] << endl;
    cout << "Element at Index 2: " << num[2] << endl;

    // The line below accesses an invalid index! It may cause a crash or print garbage value.
    cout << "Element at Index 5: " << num[5] << endl;

    return 0;
}


/*
========================================
📚 Explanation: .at(i) vs [i] in Vectors
========================================

1. .at(i):
   - Safe access with bounds checking.
   - Throws 'std::out_of_range' exception if index is invalid.
   - Recommended when safety is a priority.

2. [i]:
   - Fast access without bounds checking.
   - Undefined behavior if index is out of range (can crash or give garbage).
   - Use carefully when performance is critical and you're sure index is valid.

========================================
🧾 Summary of Differences
========================================

| Feature            | .at(i)                       | [i]                        |
|-------------------|----------------------------   |----------------------------|
| Safety            | Safe (throws on out-of-range) | Unsafe (undefined behavior)|
| Speed             | Slightly slower               | Fast                       |
| Error handling    | Exception (out_of_range)      | No error – possible crash  |
| Use case          | Debugging, secure code        | Performance-critical code  |
*/

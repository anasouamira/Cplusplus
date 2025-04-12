#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a vector with 5 elements
    vector<int> num{ 1, 2, 3, 4, 5 };

    // Display the initial vector values
    cout << "Initial Vector: ";
    for (const int& i : num) {
        cout << i << " ";
    }

    // Modify each element of the vector to 20 using a non-const reference
    cout << "\n\nUpdated Vector: ";
    for (int& i : num) {
        i = 20;           // All elements become 20
        cout << i << " "; // Print updated values
    }

    // Now, individually update specific elements
    num[1] = 40;         // 2nd element (index 1) becomes 40 using []
    num.at(2) = 80;      // 3rd element (index 2) becomes 80 using .at()
    num.at(4) = 90;      // 5th element (index 4) becomes 90 using .at()

    // Final display of the vector after modifications
    cout << "\n\nUpdated Vector: ";
    for (const int& i : num) {
        cout << i << " ";
    }

    return 0;
}


/*
========================================
📚 Explanation of Code Behavior
========================================

1. Initial vector:
   num = {1, 2, 3, 4, 5}

2. First update loop:
   - Using range-based loop with non-const reference `int& i`
   - Sets every element to 20 → num becomes: {20, 20, 20, 20, 20}

3. Manual updates:
   - num[1] = 40 → Updates second element → {20, 40, 20, 20, 20}
   - num.at(2) = 80 → Updates third element → {20, 40, 80, 20, 20}
   - num.at(4) = 90 → Updates fifth element → {20, 40, 80, 20, 90}

========================================
🧾 Final Vector Output
========================================
20 40 80 20 90

========================================
💡 Summary
========================================
- `for (int& i : vec)` lets you modify elements directly.
- `.at(index)` and `[index]` both allow assignment to specific elements.
- `.at(index)` is safer (with bounds-checking), while `[index]` is faster but unsafe if index is invalid.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a vector with values 1 to 5
    vector<int> num{ 1, 2, 3, 4, 5 };

    // Declare an iterator for a vector of integers
    vector<int>::iterator iter;

    // Use the iterator to loop through each element of the vector
    for (iter = num.begin(); iter != num.end(); iter++) {
        // Dereference the iterator to access the value
        cout << *iter << " ";
    }

    return 0;
}

/*
========================================
📚 Explanation
========================================
- `vector<int>::iterator` is used to point to elements in the vector.
- `num.begin()` returns an iterator pointing to the first element.
- `num.end()` returns an iterator pointing *past* the last element.
- The loop continues until the iterator reaches the end of the vector.
- `*iter` gives access to the current element the iterator points to.

========================================
💡 Summary
========================================
✅ Iterators are useful for:
  - Accessing elements of STL containers (like vector, list, set).
  - Maintaining generic code that works with different containers.
  - Navigating through the container using pointer-like syntax.
*/

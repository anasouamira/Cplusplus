#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an array of integers
    int numbers[] = {10, 20, 30, 40, 50};

    // Range-based for loop (also called Ranged Loop)
    // This loop automatically goes through each element in the array
    // 'num' will take the value of each element one by one
    for (int num : numbers)
    {
        // Print the current element
        cout << num << " ";
    }

    // Output: 10 20 30 40 50

    return 0;
}
// A range-based for loop is used to iterate through elements of a container (like arrays, vectors, etc).
// It makes code shorter and cleaner compared to traditional for loops.
// Syntax: for (data_type var : container) { ... }

#include <vector>     // Required for std::vector
#include <iostream>   // For cout
using namespace std;

int main()
{
    // ✅ Declare and initialize a vector of integers with 5 values
    vector <int> vNumbers = { 10, 20, 30, 40, 50 };

    // ✅ Output the header for the vector
    cout << "Numbers Vector = ";

    // ✅ Range-based for loop to iterate over each element in the vector
    // 'Number' refers to each element in the vector, and the '&' symbol means it's passed by reference
    // This avoids copying the values for efficiency
    for (int &Number : vNumbers) {
        cout << Number << " ";  // Print each number followed by a space
    }

    cout << endl;  // Print a newline after the loop finishes

    return 0;
}

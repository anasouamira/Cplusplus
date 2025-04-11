#include <vector>     // For std::vector
#include <iostream>   // For cout
using namespace std;

int main()
{
    // ✅ Declare an empty vector of integers
    vector <int> vNumbers;

    // ✅ Add elements to the vector using push_back() method
    vNumbers.push_back(10);  // Adds 10 to the vector
    vNumbers.push_back(20);  // Adds 20 to the vector
    vNumbers.push_back(30);  // Adds 30 to the vector
    vNumbers.push_back(40);  // Adds 40 to the vector
    vNumbers.push_back(50);  // Adds 50 to the vector

    // ✅ Output the contents of the vector
    cout << "Numbers Vector: \n\n";

    // ✅ Range-based for loop to iterate over and print each element in the vector
    for (int & Number : vNumbers) {
        cout << Number << endl;  // Print each number on a new line
    }

    cout << endl;  // Add a newline after printing all the numbers

    return 0;
}

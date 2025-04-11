#include <vector>     // Required for using vectors
#include <iostream>   // For input/output
using namespace std;

int main()
{
    // Declare a vector of integers
    vector<int> vNumbers;

    // Add 5 elements to the vector
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // Print the first element in the vector
    cout << "First Element: " << vNumbers.front() << endl;

    // Print the last element in the vector
    cout << "Last Element: " << vNumbers.back() << endl;

    // Print the current number of elements in the vector
    cout << "Size: " << vNumbers.size() << endl;

    // Print the current capacity of the vector (how many elements it can store before resizing)
    cout << "Capacity : " << vNumbers.capacity() << endl;

    // Check if the vector is empty (returns 1 for true, 0 for false)
    cout << "Empty : " << vNumbers.empty() << endl;

    return 0;
}

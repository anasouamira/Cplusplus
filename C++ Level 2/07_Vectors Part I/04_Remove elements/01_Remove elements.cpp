#include <vector>     // Required to use std::vector
#include <iostream>   // For input and output
using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> vNumbers;

    // Add (push) numbers to the end of the vector
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // Now the vector contains: 10, 20, 30, 40, 50

    // Remove (pop) elements from the end of the vector
    vNumbers.pop_back(); // removes 50
    vNumbers.pop_back(); // removes 40
    vNumbers.pop_back(); // removes 30
    vNumbers.pop_back(); // removes 20
    vNumbers.pop_back(); // removes 10

    // Now the vector is empty

    cout << "Numbers Vector: \n\n";

    // Loop through the vector and print elements (will not print anything)
    for (int& Number : vNumbers) {
        cout << Number << endl;
    }

    cout << endl;

    return 0;
}

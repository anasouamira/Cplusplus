#include <vector>     // For std::vector
#include <iostream>   // For input/output operations
using namespace std;

// Function to read numbers and store them in the vector
void ReadNumbers(vector <int> & vNumbers)
{
    char ReadMore = 'Y';  // Variable to ask the user if they want to enter more numbers
    int Number;           // Variable to store the user's input

    // Loop continues as long as the user chooses to enter more numbers (Y or y)
    while (ReadMore == 'Y' || ReadMore == 'y')
    {
        cout << "Please enter a number: ";
        cin >> Number;  // Read the number from the user
        vNumbers.push_back(Number);  // Add the number to the vector

        // Ask the user if they want to enter more numbers
        cout << "\nDo you want to read more numbers? Y/N ?";
        cin >> ReadMore;  // Read user's response to continue or stop
    }
}

// Function to print the numbers stored in the vector
void PrintVectorNumbers(vector <int> & vNumbers)
{
    cout << "Numbers Vector: \n\n";  // Output header for the vector contents

    // Range-based for loop to iterate through the vector and print each number
    for (int Number : vNumbers)
    {
        cout << Number << endl;  // Print each number followed by a newline
    }

    cout << endl;  // Print an extra newline after displaying all numbers
}

int main()
{
    // Declare an empty vector of integers to store user inputs
    vector <int> vNumbers;

    // Call the ReadNumbers function to let the user input numbers
    ReadNumbers(vNumbers);

    // Call the PrintVectorNumbers function to display the entered numbers
    PrintVectorNumbers(vNumbers);

    return 0;
}

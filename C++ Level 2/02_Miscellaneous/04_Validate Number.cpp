#include <iostream>
#include <limits> // Required for numeric_limits
using namespace std;

// Function to read a valid integer from the user
int ReadNumber()
{
    int Number;

    // Ask the user to enter a number
    cout << "Please enter a number?" << endl;
    cin >> Number;

    // Check if the input is invalid (for example, letters instead of numbers)
    while (cin.fail())
    {
        // Clear the error flag on cin so future I/O operations will work
        cin.clear();

        // Ignore the rest of the input line to discard invalid input
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Ask the user to enter a valid number again
        cout << "Invalid Number, Enter a valid one:" << endl;
        cin >> Number;
    }

    // Return the valid number
    return Number;
}

int main()
{
    // Call the function and display the validated number
    cout << "Your Number is: " << ReadNumber();

    return 0;
}
// ✅ Validate Number:
// It means checking the user's input to make sure it's the correct type or within an expected range.
// In this case, we are checking that the input is a valid integer.
// If the user enters something invalid (like a letter), we ask them to enter it again.
// This ensures the program doesn't crash or produce incorrect results.

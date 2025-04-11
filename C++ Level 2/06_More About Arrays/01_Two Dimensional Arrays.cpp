#include <iostream>
using namespace std;

int main()
{
    // Declaration and initialization of a 2D array with 3 rows and 4 columns
    // Each inner pair of curly braces represents a row
    int x[3][4] = {
        {1, 2, 3, 4},     // Row 0
        {5, 6, 7, 8},     // Row 1
        {9, 10, 11, 12}   // Row 2
    };

    // Loop through each row
    for (int i = 0; i < 3; i++)
    {
        // Loop through each column of the current row
        for (int j = 0; j < 4; j++)
        {
            // Print the element at position [i][j] followed by a space
            cout << x[i][j] << " ";
        }

        // Print a new line after each row
        cout << endl;
    }

    return 0;
}

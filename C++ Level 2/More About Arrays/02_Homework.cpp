#include <cstdio>     // For printf
#include <iostream>   // For cout
using namespace std;

int main()
{
    // Declare a 2D array of size 10x10
    int x[10][10];

    // Fill the 2D array with multiplication table values
    for (int i = 0; i < 10; i++)       // Loop through each row
    {
        for (int j = 0; j < 10; j++)   // Loop through each column
        {
            x[i][j] = (i + 1) * (j + 1);  // Store the product (row + 1) * (col + 1)
        }
    }

    // Print the multiplication table
    for (int i = 0; i < 10; i++)       // Loop through each row
    {
        for (int j = 0; j < 10; j++)   // Loop through each column
        {
            // Print each number with a minimum width of 2 digits, padded with zeros if needed
            // %0*d → dynamically sets width and pads with zeros (e.g., 01, 09, 10)
            printf("%0*d ", 2, x[i][j]);
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

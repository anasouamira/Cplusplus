#include <iostream>
using namespace std;

// Define an enumeration for colors with specific integer values
enum Color { Red = 100, Green = 200, Blue = 300 };

// Define an enumeration for gender with default integer values starting from 0
enum Gender { Male, Female };

int main()
{
    // Declare variables of type Color and Gender
    Color myColor;
    Gender myGender;

    // Assign values to the variables
    myColor = Color::Red;         // Assign Red (100) to myColor
    myGender = Gender::Female;    // Assign Female (1) to myGender

    // Print the underlying integer values of the enums
    cout << "My favorite color is: " << myColor << endl; // Output: 100
    cout << "My gender is: " << myGender << endl;       // Output: 1

    return 0; // Indicate that the program ended successfully
}



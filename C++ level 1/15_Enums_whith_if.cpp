
#include <iostream> // Include the input/output stream library
using namespace std;

// Define an enumeration for screen colors
enum ScreenColor { red = 1, green = 2, yellow = 3 };

// Function to print the available color options
void PrintColor() {
    cout << "************************" << endl;
    cout << "red = 1 " << endl;
    cout << "green = 2" << endl;
    cout << "yellow = 3" << endl;
    cout << "************************" << endl;
    cout << "Choose a number: " << endl;
}

// Function to read the user's choice and change the console text and background color
void RedColor() {
    int c; // Variable to store the user's choice
    cin >> c; // Read input from the user
    ScreenColor color; // Variable of type ScreenColor to hold the selected color
    color = (ScreenColor)c; // Cast the integer input to ScreenColor enum
    
    // Change the console color based on the selected option
    if (color == ScreenColor::red) { 
        system("color 4F"); // Set console color to red
    } 
    else if (color == ScreenColor::green) { 
        system("color 2F"); // Set console color to green
    } 
    else if (color == ScreenColor::yellow) { 
        system("color 6F"); // Set console color to yellow
    } 
    else {
        cout << "Invalid choice!" << endl; // Handle invalid input
    }
}

int main() {
    PrintColor(); // Display the available color options
    RedColor(); // Read the user's choice and apply the color
    return 0; // Indicate that the program ended successfully
}



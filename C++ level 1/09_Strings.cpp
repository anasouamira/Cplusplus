

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Initialize variables
    string FullName = "ANASOUAMIRA"; // String to store the full name
    int Age; // Integer to store the user's age

    // Find the length of the full name
    cout << "Length of my full name is: " << FullName.length() << endl; // Output: 11

    // Access the third character (index 3)
    cout << FullName[3] << endl; // Output: S

    // Convert string numbers to double and perform addition
    string Numb1 = "100";
    string Numb2 = "65.876";
    double sum = stod(Numb1) + stod(Numb2); // sum = 165.876
    cout << "Sum of numbers: " << sum << endl;

    // Get user input for age and full name
    cout << "Enter your Age: ";
    cin >> Age; // Get user's age as input
    cout << "Enter your name: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, FullName); // Get user's full name as input

    // Display user input
    cout << FullName << endl; // Print the user's full name
    cout << Age << endl;      // Print the user's age

    return 0;
}


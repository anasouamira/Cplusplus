

#include <iostream> // Include the input/output stream library
using namespace std;

// Define an enumeration for family names
enum enNamesFamilly { Anas = 1, yousra = 2, malika = 3 };

// Function to display the list of family names
void ShowMeNames() {
    cout << " Names of family: " << endl;
    cout << " 1 : Anas " << endl;
    cout << " 2 : yousra " << endl;
    cout << " 3 : Malika " << endl;
    cout << "Choose a Name: ";
}

// Function to read a family name based on user input
enNamesFamilly RedNamesFamilly() {
    int Nm; // Variable to store the user's choice
    enNamesFamilly Name; // Variable to store the selected family name
    cin >> Nm; // Read the input from the user
    Name = (enNamesFamilly)Nm; // Cast the integer input to the enNamesFamilly enum
    return Name; // Return the selected name
}

// Function to get the string representation of the family name
string GitNameFamilly(enNamesFamilly Name) {
    switch (Name) {
        case enNamesFamilly::Anas:
            return "Anas";
        case enNamesFamilly::yousra:
            return "yousra";
        case enNamesFamilly::malika:
            return "malika";
        default:
            return "Invalid choice"; // Handle invalid input
    }
}

int main() {
    ShowMeNames(); // Display the list of family names
    cout << GitNameFamilly(RedNamesFamilly()); // Read and display the selected name
    return 0; // Indicate that the program ended successfully
}



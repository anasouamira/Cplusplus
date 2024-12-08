#include <iostream>
using namespace std;

// Structure to hold the values
struct Notes {
    float ControlContunue1, ControlContunue2, Regional, National; // Variables for different notes
    string Name; // Variable for the student's name
};

// Function to enter values for the notes
void Entervaleus(Notes Note[3]) {
    // Prompt the user to enter their notes
    cout << "Please enter your notes: \n";

    // Enter values for Control Contunue 1
    cout << "Control Contunue 1: ";
    cin >> Note[0].ControlContunue1;

    // Enter values for Control Contunue 2
    cout << "Control Contunue 2: ";
    cin >> Note[1].ControlContunue2;

    // Enter values for Regional
    cout << "Regional: ";
    cin >> Note[2].Regional;

    // Enter values for National
    cout << "National: ";
    cin >> Note[3].National;

    cout << "| Note geniral | : "; // Display the general note
}

// Function to calculate the general note
float CalculNotegeniral(Notes Note[3]) {
    // Calculate the average of Control Contunue 1 and Control Contunue 2
    float ControlContunue = (Note[0].ControlContunue1 + Note[1].ControlContunue2) / 2;
    
    // Get the Regional and National scores
    float Regional = Note[2].Regional;
    float National = Note[3].National;

    // Calculate the general note using the formula
    return (((ControlContunue + Regional) / 2) * 0.5) + (National * 0.5);
}

int main() {
    // Array with Function
    Notes Note[3];

    // Enter values for the notes
    Entervaleus(Note);

    // Calculate and display the general note
    cout << CalculNotegeniral(Note) << endl;

    // Array with Structure
    Notes persson[2];

    // Assign values to the first person
    persson[0].Name = "Anas";
    persson[0].ControlContunue1 = 16;
    persson[0].ControlContunue2 = 17;
    persson[0].National = 11;
    persson[0].Regional = 12;

    // Display the name of the first person
    cout << persson[0].Name << endl;

    // * Normal Array *
    int y[3] = {1, 5, 6};
    
    // Display the third element of the array
    cout << y[2] << endl;

    return 0;
}

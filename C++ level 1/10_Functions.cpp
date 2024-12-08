#include <iostream>
#include <string>

using namespace std;

// Define a structure to hold the values
struct Tags {
    float ControlContinue1; // Value for Control Continue 1
    float ControlContinue2; // Value for Control Continue 2
    float Rigonal;          // Value for Rigonal
    float National;         // Value for National
};

// Function to calculate the rate
void calculate_the_rate(Tags &user) {
    // Prompt the user for Control Continue 1
    cout << "ControlContinue1: ";
    cin >> user.ControlContinue1;

    // Prompt the user for Control Continue 2
    cout << "ControlContinue2: ";
    cin >> user.ControlContinue2;

    // Prompt the user for Rigonal
    cout << "Rigonal: ";
    cin >> user.Rigonal;

    // Prompt the user for National
    cout << "National: ";
    cin >> user.National;
}

// Function to calculate the general note
double note_general(Tags user) {
    // Calculate the general note using the given formula
    return (((user.ControlContinue1 + user.ControlContinue2) / 2 + user.Rigonal) * 0.5 + user.National);
}

int main() {
    // Create an instance of Tags
    Tags user;
    
    // Calculate the rate
    calculate_the_rate(user);
    
    // Calculate and display the general note
    cout << "General note: " << note_general(user) << endl;

    return 0;
}

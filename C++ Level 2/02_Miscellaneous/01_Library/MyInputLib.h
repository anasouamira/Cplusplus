#pragma once // Prevents this header file from being included multiple times

#include <iostream>
using namespace std;

// Define a custom namespace to group input-related functions
namespace MyInputLib {

    // 📥 ReadNumber: Prompts the user to enter a number from the keyboard
    int ReadNumber() {
        int Number;

        // Display a message to the user
        cout << "Read Number: " << endl;

        // Read the number from standard input (keyboard)
        cin >> Number;
        // Note: The variable is local, so it won't be used outside this function.
        // To return the number, you could modify the function like this:
        // int ReadNumber() { int Number; cin >> Number; return Number; }
        return Number;
    }

}

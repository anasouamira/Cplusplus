#include <iostream>
#include <fstream> // Include the fstream library to handle file input/output
using namespace std;

int main() {
    // Declare a file stream object for file operations
    fstream MyFile;

    // Open the file in append mode using ios::out | ios::app flags
    // ios::out allows us to open the file for writing, and ios::app ensures that we append data
    // rather than overwrite the existing content
    MyFile.open("MyFile.txt", ios::out | ios::app); // Append Mode

    // Check if the file is successfully opened
    if (MyFile.is_open()) {
        // Append new lines of text to the existing file
        MyFile << "Hi, this is a new line\n";
        MyFile << "Hi, this is another new line\n";

        // Close the file after writing
        MyFile.close();
    } else {
        // If the file is not open, print an error message
        cout << "Error opening file" << endl;
    }

    return 0;
}

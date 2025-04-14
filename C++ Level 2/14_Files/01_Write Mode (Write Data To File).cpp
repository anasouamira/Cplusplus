#include <iostream>
#include <fstream> // Include the fstream library to handle file input/output
using namespace std;

int main() {
    // Declare a file stream object for file operations
    fstream MyFile;

    // Open the file in write mode using ios::out flag
    // This will create the file if it doesn't exist, and overwrite the file if it already exists
    MyFile.open("MyFile.txt", ios::out); // Write Mode

    // Check if the file is successfully opened
    if (MyFile.is_open())
    {
        // Write some text into the file
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";

        // Close the file after writing
        MyFile.close();
    }
    else {
        // If the file is not open, print an error message
        cout << "Error opening file" << endl;
    }

    return 0;
}

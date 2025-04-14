#include <iostream>
#include <fstream>  // Include the fstream library for file input/output
#include <string>   // Include the string library to handle string operations
using namespace std;

// Function to print the content of a file
void PrintFileContenet(string FileName)
{
    // Declare a file stream object for reading the file
    fstream MyFile;

    // Open the file in read mode using ios::in
    MyFile.open(FileName, ios::in); // read Mode

    // Check if the file is successfully opened
    if (MyFile.is_open())
    {
        string Line;

        // Read the file line by line until the end
        while (getline(MyFile, Line))
        {
            // Print each line to the console
            cout << Line << endl;
        }

        // Close the file after reading
        MyFile.close();
    }
    else
    {
        // If the file can't be opened, print an error message
        cout << "Error opening file" << endl;
    }
}

int main()
{
    // Call the function to print the content of "MyFile.txt"
    PrintFileContenet("MyFile.txt");

    return 0;
}

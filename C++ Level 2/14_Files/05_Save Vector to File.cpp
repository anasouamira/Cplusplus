#include <iostream>
#include <fstream>  // Include fstream library for file input/output
#include <string>   // Include string library to handle string operations
#include <vector>   // Include vector library to store and manipulate dynamic arrays
using namespace std;

// Function to save vector data to a file
void SaveVectorToFile(string FileName, vector<string> vFileContent)
{
    // Declare a file stream object for writing to a file
    fstream MyFile;

    // Open the file in output mode (write)
    MyFile.open(FileName, ios::out);

    // Check if the file is successfully opened
    if (MyFile.is_open())
    {
        // Loop through each line in the vector and write it to the file
        for (string &Line : vFileContent)
        {
            // Avoid writing empty lines
            if (Line != "")
            {
                // Write each line to the file followed by a newline
                MyFile << Line << endl;
            }
        }
        // Close the file after writing
        MyFile.close();
    }
    else
    {
        // If file can't be opened, print an error message
        cout << "Error opening file for writing" << endl;
    }
}

int main()
{
    // Declare and initialize a vector with some string data
    vector<string> vFileContenet{
        "Ali", "Shadi", "Maher", "Fadi", "Lama"
    };

    // Call the function to save the vector data to the file "MyFile.txt"
    SaveVectorToFile("MyFile.txt", vFileContenet);

    return 0;
}

#include <iostream>
#include <fstream>  // Include fstream library for file input/output
#include <string>   // Include string library to handle string operations
#include <vector>   // Include vector library to store and manipulate dynamic arrays
using namespace std;

// Function to load data from a file into a vector
void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
    // Declare a file stream object to read the file
    fstream MyFile;
    
    // Open the file in read mode using ios::in
    MyFile.open(FileName, ios::in); // read Mode
    
    // Check if the file was successfully opened
    if (MyFile.is_open())
    {
        string Line;
        
        // Read the file line by line until the end
        while (getline(MyFile, Line))
        {
            // Push each line into the vector vFileContent
            vFileContent.push_back(Line);
        }

        // Close the file after reading
        MyFile.close();
    }
    else
    {
        // If the file cannot be opened, print an error message
        cout << "Error opening file" << endl;
    }
}

int main()
{
    // Declare a vector to hold the content of the file
    vector<string> vFileContenet;

    // Call the function to load data from the file "MyFile.txt" into the vector
    LoadDataFromFileToVector("MyFile.txt", vFileContenet);

    // Print all the lines from the vector to the console
    for (string& Line : vFileContenet)
    {
        cout << Line << endl;
    }

    return 0;
}

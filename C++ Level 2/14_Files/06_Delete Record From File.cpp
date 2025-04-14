#include <iostream>
#include <fstream>  // Include fstream library to handle file operations
#include <string>   // Include string library to handle string operations
#include <vector>   // Include vector library to handle dynamic arrays
using namespace std;

// Function to load data from a file into a vector of strings
void LoadDataFromFileToVector(string FileName, vector<string> &vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in); // Open the file in read mode
    if (MyFile.is_open())  // Check if the file is opened successfully
    {
        string Line;
        // Read each line from the file and push it into the vector
        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }
        MyFile.close();  // Close the file after reading
    }
}

// Function to save the vector data to the file
void SaveVectorToFile(string FileName, vector<string> vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);  // Open the file in write mode (overwrites the existing content)
    if (MyFile.is_open())  // Check if the file is opened successfully
    {
        // Loop through each string in the vector and write it to the file
        for (string Line : vFileContent)
        {
            if (Line != "")  // Skip empty lines
            {
                MyFile << Line << endl;  // Write each line to the file
            }
        }
        MyFile.close();  // Close the file after writing
    }
}

// Function to delete a specific record from the file
void DeleteRecordFromFile(string FileName, string Record)
{
    vector<string> vFileContent;
    // Load existing data from the file into the vector
    LoadDataFromFileToVector(FileName, vFileContent);
    
    // Loop through the vector and mark the record to be deleted by setting it to an empty string
    for (string &Line : vFileContent)
    {
        if (Line == Record)
        {
            Line = "";  // Set the matched record to an empty string (effectively deleting it)
        }
    }

    // Save the updated data (with the record deleted) back to the file
    SaveVectorToFile(FileName, vFileContent);
}

// Function to print the content of a file to the console
void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in); // Open the file in read mode
    if (MyFile.is_open())  // Check if the file is opened successfully
    {
        string Line;
        // Read and print each line from the file
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();  // Close the file after reading
    }
}

int main()
{
    // Print the content of the file before deletion
    cout << "File Content Before Delete.\n";
    PrintFileContent("MyFile.txt");
    
    // Delete the record "Ali" from the file
    DeleteRecordFromFile("MyFile.txt", "Ali");

    // Print the content of the file after deletion
    cout << "\n\nFile Content After Delete.\n";
    PrintFileContent("MyFile.txt");

    return 0;
}

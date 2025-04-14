#include <iostream>
#include <fstream>  // Include fstream library for file operations
#include <string>   // Include string library for string operations
#include <vector>   // Include vector library for handling dynamic arrays
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

// Function to save the content of the vector to the file
void SaveVectorToFile(string FileName, vector<string> vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);  // Open the file in write mode (overwrites existing content)
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

// Function to update a specific record in the file
void UpdateRecordInFile(string FileName, string Record, string UpdateTo)
{
    vector<string> vFileContent;
    // Load existing data from the file into the vector
    LoadDataFromFileToVector(FileName, vFileContent);
    
    // Loop through the vector and replace the record to be updated
    for (string &Line : vFileContent)
    {
        if (Line == Record)  // Check if the record matches the one to be updated
        {
            Line = UpdateTo;  // Update the record
        }
    }

    // Save the updated content back to the file
    SaveVectorToFile(FileName, vFileContent);
}

// Function to print the content of the file to the console
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
    // Print the content of the file before updating
    cout << "File Content Before Update:\n";
    PrintFileContent("MyFile.txt");

    // Update the record "Ali" to "Ahmed" in the file
    UpdateRecordInFile("MyFile.txt", "Ali", "Ahmed");

    // Print the content of the file after updating
    cout << "\n\nFile Content After Update:\n";
    PrintFileContent("MyFile.txt");

    return 0;
}

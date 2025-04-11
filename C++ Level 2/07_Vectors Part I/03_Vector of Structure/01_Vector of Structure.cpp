#include <vector>     // To use std::vector
#include <iostream>   // For input and output
using namespace std;

// Define a structure to hold employee information
struct stEmployee
{
    string FirstName;   // Employee's first name
    string LastName;    // Employee's last name
    float Salary;       // Employee's salary
};

int main()
{
    // Declare a vector to store multiple stEmployee structures
    vector<stEmployee> vEmployees;

    // Temporary employee struct to reuse for adding new employees
    stEmployee tempEmployee;

    // Set values for the first employee
    tempEmployee.FirstName = "Mohammed";
    tempEmployee.LastName = "Abu-Hahdoud";
    tempEmployee.Salary = 5000;
    vEmployees.push_back(tempEmployee); // Add employee to vector

    // Set values for the second employee
    tempEmployee.FirstName = "Ali";
    tempEmployee.LastName = "Maher";
    tempEmployee.Salary = 300;
    vEmployees.push_back(tempEmployee); // Add employee to vector

    // Set values for the third employee
    tempEmployee.FirstName = "Aya";
    tempEmployee.LastName = "Omran";
    tempEmployee.Salary = 1000;
    vEmployees.push_back(tempEmployee); // Add employee to vector

    // Print all employees from the vector
    cout << "Employees Vector: \n\n";

    // Use a range-based for loop to access each employee
    for (stEmployee &Employee : vEmployees) {
        cout << "FirstName: " << Employee.FirstName << endl; // Print first name
        cout << "LastName : " << Employee.LastName << endl;  // Print last name
        cout << "Salary   : " << Employee.Salary << endl;    // Print salary
        cout << endl; // Empty line between employees
    }

    cout << endl; // Final line break for formatting

    return 0; // Exit program
}

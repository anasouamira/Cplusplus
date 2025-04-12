#include <iostream>
using namespace std;

struct stEmployee
{
    string Name;
    float Salary;
};

int main()
{
    // Declaring an instance of struct stEmployee
    stEmployee Employee1, *ptr;

    // Assigning values to Employee1
    Employee1.Name = "Mohammed Abu-Hadhoud";
    Employee1.Salary = 5000;

    // Printing details of Employee1
    cout << Employee1.Name << endl;
    cout << Employee1.Salary << endl;

    // Pointer pointing to Employee1
    ptr = &Employee1;

    // Accessing values using the pointer
    cout << "\nUsing Pointer:\n";
    cout << ptr->Name << endl;   // Using '->' to access members of the struct via pointer
    cout << ptr->Salary << endl;  // Using '->' to access members of the struct via pointer

    return 0;
}

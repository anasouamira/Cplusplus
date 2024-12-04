

#include <iostream> // Include the standard input/output stream library
#include <string>   // Include the string library for string operations
using namespace std; // Use the standard namespace to avoid using std:: prefix

int main()
{
    //===============================================================
    // Convert double to integer

    int Numb1; // Declare an integer variable
    double Numb2 = 17.987; // Declare and initialize a double variable

    Numb1 = Numb2; // Implicit Conversion from double to int (Fractional part is truncated)

    Numb1 = (int)Numb2; // Explicit Conversion from double to int (using C-style casting)

    Numb1 = int(Numb2); // Explicit Conversion using C++ casting syntax (int())

    cout << Numb1 << endl; // Output the integer value (17)

    //===============================================================

    string Numb3 = "244.877"; 

    // Convert string to integer
    int Numb_int = stoi(Numb3); // Convert the string Numb3 to an integer using stoi (String to Integer)
    
    // Convert string to float
    float Numb_float = stof(Numb3); // Convert the string Numb3 to a float using stof (String to Float)

    // Convert string to double
    double Numb_double = stod(Numb3); // Convert the string Numb3 to a double using stod (String to Double)

    cout << Numb_float << endl; // Output the float value (244.877)

    //===============================================================

    // Convert numbers to string

    string st1, st2; // Declare two string variables to store the string representations
    st1 = to_string(Numb2); // Convert the double Numb2 to a string using to_string
    st2 = to_string(Numb_double); // Convert the double Numb_double to a string using to_string

    cout << st2 << endl; // Output the string representation of the double (244.877)

    return 0; // Indicate that the program ended successfully
}


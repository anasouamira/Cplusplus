#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

int main() 
{
    int x; // Variable to store the user's input for the age
    cout << "Donner Age de anas : "; // Prompt the user to input an age
    cin >> x; // Read the input from the user and store it in 'x'

    // Check if the entered age is greater than 20
    if (x > 20) 
    {
        cout << "Non!! l'age est plus grand que l'age de anas " << endl;
    } 
    // Check if the entered age is less than 20
    else if (x < 20) 
    {
        cout << "Non!! l'age est plus petit que l'age de anas " << endl;
    } 
    // If neither of the above conditions is true, the age is correct
    else 
    {
        cout << "l'age est correcte " << endl;
    }
    
    return 0; // Indicate that the program ended successfully
}



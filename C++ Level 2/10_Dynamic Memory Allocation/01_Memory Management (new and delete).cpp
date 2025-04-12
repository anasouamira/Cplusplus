#include <iostream>
using namespace std;

int main()
{
    // Declare an int pointer
    int* ptrX;
    
    // Declare a float pointer
    float* ptrY;

    // Dynamically allocate memory for one int
    ptrX = new int;

    // Dynamically allocate memory for one float
    ptrY = new float;

    // Assign values to the dynamically allocated memory
    *ptrX = 45;
    *ptrY = 58.35f;

    // Output the values stored in the dynamically allocated memory
    cout << *ptrX << endl;   // Output: 45
    cout << *ptrY << endl;   // Output: 58.35

    // Deallocate the memory to prevent memory leaks
    delete ptrX;
    delete ptrY;

    return 0;
}

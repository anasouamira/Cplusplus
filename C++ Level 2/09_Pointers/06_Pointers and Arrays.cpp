#include <iostream>
using namespace std;

int main() {
    // Declaring an array of integers
    int arr[4] = {10, 20, 30, 40};

    // Declaring a pointer to int
    int *ptr;

    // Pointing ptr to the beginning of the array
    ptr = arr;

    // Printing the addresses of the elements using the pointer
    cout << "Addresses are:\n";
    cout << ptr << endl;       // Address of arr[0]
    cout << ptr + 1 << endl;   // Address of arr[1]
    cout << ptr + 2 << endl;   // Address of arr[2]
    cout << ptr + 3 << endl;   // Address of arr[3]

    // Printing the values stored at the addresses using the pointer
    cout << "\nValues are: \n";
    cout << *(ptr) << endl;       // Value at arr[0]
    cout << *(ptr + 1) << endl;   // Value at arr[1]
    cout << *(ptr + 2) << endl;   // Value at arr[2]
    cout << *(ptr + 3) << endl;   // Value at arr[3]

    return 0;
}

#include <iostream>
using namespace std;

// Function to calculate 'base' raised to the power 'Power' using recursion
int MyPower(short base, short Power)
{
    // Base case: anything raised to the power of 0 is 1
    if (Power == 0)
        return 1;
    else
    {
        // Recursive step: base * base^(Power - 1)
        return (base * MyPower(base, Power - 1));
    }
}


// ✅ Recursive function to print numbers from N to M
void PrintNumbersFromNtoM(int N, int M)
{
    // Base case (terminating condition): 
    // We stop the recursion when N exceeds M
    if (N <= M)
    {
        cout << N << endl;   // Print the current value of N
        // Recursive step: the function calls itself with N + 1
        PrintNumbersFromNtoM(N + 1, M);  // Recurse to print the next number
    }
}

int main() {
    // Main function calls PrintNumbersFromNtoM to print numbers from 1 to 10
    PrintNumbersFromNtoM(1, 10);  // Start recursion from N = 1 to M = 10
    MyPower(2,4);
    return 0;  // End of the program
}

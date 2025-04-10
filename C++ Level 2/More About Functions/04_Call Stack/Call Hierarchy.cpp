#include <iostream>
using namespace std;

// 🔽 Lowest level function
void Function4()
{
    // Call Stack (at this point):
    // main → Function1 → Function2 → Function3 → Function4
    cout << "Hi I'm function4 " << endl;
}

void Function3()
{
    Function4(); // Calls Function4 → control goes deeper
}

void Function2()
{
    Function3(); // Calls Function3 → stack grows
}

void Function1()
{
    Function2(); // Calls Function2 → stack grows more
}

int main() {
    // Entry point of the program
    // Call Stack starts here: [main]
    Function1(); // Calls Function1 → starts the chain

    return 0; // Program ends → call stack is fully cleared
}

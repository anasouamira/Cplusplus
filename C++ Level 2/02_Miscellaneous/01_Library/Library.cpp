#include <iostream>
#include "MyLib.h"; // Including our custom library
#include "MyInputLib.h"; // Including our custom library

using namespace std;

int main() {

    // Call the test function from your library
    MyLib::test();

    // Call ReadNumber and store the returned value
    int number = MyInputLib::ReadNumber();
    cout << "You entered the number: " << number << endl;

    return 0;
}

/*
--------------------------------------------------------
📚 What is a Library in C++?
--------------------------------------------------------
A library is a reusable collection of code (functions/classes) that can be used in multiple programs.

🔧 Types:
- Static Library (.lib): Linked at compile time
- Dynamic Library (.dll): Linked at runtime

--------------------------------------------------------
🛠️ How to Create Your Own Library in Visual Studio:
--------------------------------------------------------
1. Create a new project → "Static Library"
2. Write your functions in .cpp/.h files
3. Build the project → Visual Studio creates a .lib file
4. In another project:
   - Include the .h file
   - Link against the .lib file in project settings

--------------------------------------------------------
💡 Why Use Libraries?
--------------------------------------------------------
- Organize reusable code
- Improve modularity
- Easier maintenance and testing
--------------------------------------------------------
*/

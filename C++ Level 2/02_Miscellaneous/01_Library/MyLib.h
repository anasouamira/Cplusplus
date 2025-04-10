#pragma once // Prevents multiple inclusion of this header file during compilation

#include <iostream>
using namespace std;

// ✅ Custom namespace to organize your library functions
namespace MyLib {

    // 📢 Function: test
    // This function prints "Hello world!" to the console
    void test() {
        cout << "Hello world!" << endl;
    }

}

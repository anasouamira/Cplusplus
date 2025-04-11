#include <iostream>
#include <cstdio>  // Required for printf
using namespace std;

int main() {
    // ✅ Character arrays (C-style strings)
    char Name[] = "Mohammed Abu-Hadhoud";
    char SchoolName[] = "Programming Advices";

    // ✅ Printing strings using %s
    // %s is used to format and print C-style strings
    printf("Dear %s, How are you?\n\n", Name);  // Output: Dear Mohammed Abu-Hadhoud, How are you?
    printf("Welcome to %s School!\n\n", SchoolName);  // Output: Welcome to Programming Advices School!

    // ✅ Character formatting with width
    char c = 'S';

    // %*c is used to set the width dynamically when printing a character
    // The first argument after the format string is the width
    // The second argument is the character to print
    printf("Setting the width of c :%*c \n", 1, c);  // Width 1: 'S'
    printf("Setting the width of c :%*c \n", 2, c);  // Width 2: ' S'
    printf("Setting the width of c :%*c \n", 3, c);  // Width 3: '  S'
    printf("Setting the width of c :%*c \n", 4, c);  // Width 4: '   S'
    printf("Setting the width of c :%*c \n", 5, c);  // Width 5: '    S'

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initialize string S1 with a sentence
    string S1 = "My Name is Mohammed Abu-Hadhoud, I Love Programming.";

    // Prints the length of the string S1
    // length() function returns the number of characters in the string
    cout << "Length of string: " << S1.length() << endl;

    // Returns the character at position 3 in the string (0-based index)
    // at() function accesses a character at the specified position
    cout << "Character at position 3: " << S1.at(3) << endl;

    // Appends the string " @ProgrammingAdvices" to the end of S1
    // append() function adds the specified string to the end
    S1.append(" @ProgrammingAdvices");
    cout << "After append: " << S1 << endl;

    // Inserts "Ali" at position 7 in the string
    // insert() function inserts the given string at the specified position
    S1.insert(7, " Ali ");
    cout << "After insert: " << S1 << endl;

    // Prints a substring starting from position 16 and length 8
    // substr() extracts the part of the string from the given position with the specified length
    cout << "Substring from position 16, length 8: " << S1.substr(16, 8) << endl;

    // Adds a single character 'X' to the end of the string
    // push_back() adds one character at the end of the string
    S1.push_back('X');
    cout << "After push_back: " << S1 << endl;

    // Removes the last character from the string
    // pop_back() removes the last character in the string
    S1.pop_back();
    cout << "After pop_back: " << S1 << endl;

    // Finds the position of the substring "Ali" in S1
    // find() returns the position where the substring first appears; returns npos if not found
    cout << "Position of 'Ali': " << S1.find("Ali") << endl;

    // Attempts to find the substring "ali" (lowercase) in the string
    // find() is case-sensitive, so it will return npos if "ali" is not found
    cout << "Position of 'ali': " << S1.find("ali") << endl;

    // Checks if "ali" was found and prints a message if not
    if (S1.find("ali") == S1.npos) {
        cout << "'ali' is not found" << endl;
    }

    // Clears the content of the string (empties it)
    // clear() removes all characters from the string
    S1.clear();
    cout << "After clear: " << S1 << endl; // This will print an empty line as the string is now empty

    return 0;
}

/*
========================================
📚 Explanation of String Operations
========================================
- `.length()`: Returns the number of characters in the string.
- `.at(i)`: Returns the character at index `i`, throws exception if out of bounds.
- `.append(str)`: Adds `str` to the end of the string.
- `.insert(index, str)`: Inserts `str` at the specified position `index`.
- `.substr(pos, len)`: Extracts a substring from the string starting at position `pos` with length `len`.
- `.push_back(char)`: Adds a single character to the end of the string.
- `.pop_back()`: Removes the last character from the string.
- `.find(substr)`: Finds the first occurrence of `substr` in the string, returns `npos` if not found.
- `.clear()`: Clears all characters from the string, making it empty.

========================================
💡 Important Notes
========================================
- All operations modify the original string.
- The `.find()` function is case-sensitive, so searching for "Ali" and "ali" will yield different results.
*/

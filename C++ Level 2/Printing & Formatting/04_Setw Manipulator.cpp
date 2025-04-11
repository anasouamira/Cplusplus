#include <iostream>
#include <iomanip> // ✅ Required for std::setw (set width for output)
using namespace std;

int main()
{
    // ✅ Print the top border of the table
    cout << "---------|--------------------------------|---------" << endl;

    // ✅ Print the column headers
    cout << "   Code  |            Name               |   Mark  " << endl;

    // ✅ Print a separator line under the headers
    cout << "---------|--------------------------------|---------" << endl;

    // ✅ Print the first row using setw to align content in columns
    cout << setw(9) << "C101" << "|"                           // Course code column, width 9
         << setw(32) << "Introduction to Programming 1" << "|" // Course name column, width 32
         << setw(9) << "95" << "|" << endl;                    // Mark column, width 9

    // ✅ Print the second row
    cout << setw(9) << "C102" << "|"
         << setw(32) << "Computer Hardware" << "|"
         << setw(9) << "88" << "|" << endl;

    // ✅ Print the third row
    cout << setw(9) << "C1035243" << "|"
         << setw(32) << "Network" << "|"
         << setw(9) << "75" << "|" << endl;

    // ✅ Print the bottom border of the table
    cout << "---------|--------------------------------|---------" << endl;

    return 0;
}

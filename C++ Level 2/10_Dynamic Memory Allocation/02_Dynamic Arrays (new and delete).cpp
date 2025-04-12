#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask the user to enter the number of students
    cout << "Enter total number of students: ";
    cin >> num;

    float* ptr;

    // Dynamically allocate memory for 'num' float values (grades)
    ptr = new float[num];

    // Ask the user to enter grades for each student
    cout << "Enter grades of students." << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i); // Store each grade in allocated memory
    }

    // Display the grades of all students
    cout << "\nDisplaying grades of students." << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // Release the dynamically allocated memory
    delete[] ptr;

    return 0;
}

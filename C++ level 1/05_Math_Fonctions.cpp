#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 41;
    cout << sqrt(x) << endl; // prints the square root of 41, approximately 6.40312

    cout << round(1.7) << endl;       // prints 2, not 5. round() rounds to the nearest integer.
    cout << round(sqrt(x)) << endl;  // prints 6, as the square root of 41 (6.40312) rounds down to 6.

    cout << pow(2, 2) << endl; // prints 4, as 2 raised to the power of 2 is 4.

    cout << ceil(4.1676) << endl;    // prints 5, the smallest integer greater than or equal to 4.1676
    cout << floor(4.8676) << endl;   // prints 4, the largest integer less than or equal to 4.8676
    cout << ceil(-4.1676) << endl;   // prints -4, as ceil rounds up towards zero for negative numbers
    cout << floor(-4.8676) << endl;  // prints -5, as floor rounds down away from zero for negative numbers

    cout << abs(-4.775) << endl; // prints 4.775, the absolute value of -4.775

    return 0;
}



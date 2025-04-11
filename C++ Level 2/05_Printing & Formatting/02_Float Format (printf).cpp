#include <iostream>
#include <cstdio>  // ✅ Required for printf
using namespace std;

int main() {
    float PI = 3.14159265;

    // ✅ Precision specification using %.*f
    // %.*f allows us to dynamically control the number of digits after the decimal point
    // The first argument after the format string is the precision value
    printf("Precision specification of %.*f\n", 1, PI);  // Output: 3.1
    printf("Precision specification of %.*f\n", 2, PI);  // Output: 3.14
    printf("Precision specification of %.*f\n", 3, PI);  // Output: 3.142
    printf("Precision specification of %.*f\n", 4, PI);  // Output: 3.1416

    float x = 7.0, y = 9.0;

    // ✅ Printing a floating-point division result with 3 decimal places
    // %.3f means print exactly 3 digits after the decimal point
    printf("\nThe float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);
    // Output: The float division is : 7.000 / 9.000 = 0.778

    double d = 12.45;

    // ✅ Printing a double with different precision
    printf("The double value is : %.3f \n", d);  // Output: 12.450
    printf("The double value is : %.4f \n", d);  // Output: 12.4500

    return 0;
}

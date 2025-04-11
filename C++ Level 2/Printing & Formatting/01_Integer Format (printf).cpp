#include <iostream>
#include <cstdio>  // ✅ Required for using printf
using namespace std;

int main() {
    int Page = 1, TotalPages = 10;

    // ✅ Print a single integer using %d (decimal)
    printf("The page number = %d \n", Page);  // Output: The page number = 1

    // ✅ Print multiple integers using multiple format specifiers
    printf("You are in Page %d of %d \n", Page, TotalPages);  
    // Output: You are in Page 1 of 10

    // ✅ Width specification with zero-padding
    // %0*d means: pad the number with zeros to match the width specified by the first argument
    // Example: %0*3 with value 1 ➝ 001
    printf("The page number = %0*d \n", 2, Page);  // Output: 01
    printf("The page number = %0*d \n", 3, Page);  // Output: 001
    printf("The page number = %0*d \n", 4, Page);  // Output: 0001
    printf("The page number = %0*d \n", 5, Page);  // Output: 00001

    int Number1 = 20, Number2 = 30;

    // ✅ Use expressions inside printf — calculates 20 + 30 = 50 and prints it
    printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);  
    // Output: The Result of 20 + 30 = 50

    return 0;
}

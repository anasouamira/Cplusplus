
#include <iostream>
using namespace std;

int main()
{
	int A = 10;
	int B = A++; // B will take the old value of A, then A will increase by 1.

	cout << "A = " << A << endl; // A is now 11
	cout << "B = " << B << endl; // B is 10 (old value of A)

	B = ++A; // A will increase by 1 first, then B will take the new value of A.

	cout << "A = " << A << endl; // A is now 12
	cout << "B = " << B << endl; // B is 12 (new value of A)

	return 0;
}



#include <iostream>
using namespace std;


int main(){

	int A = 10; 
	int B = A++; // B well take the old value of A, then A will increase by 1. 

	cout << " A = " << A << endl;
	cout << " B = " << B << endl;

	B = ++A; //  A will increase by 1, then B well take the new value.

	cout << " A = " << A << endl;
	cout << " B = " << B << endl;




}


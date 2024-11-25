

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double x = 41;
	cout << sqrt(x) << endl; // gives 6.40312

	cout << round(1.7) << endl;		// gives 5
	cout << round(sqrt(x)) << endl; // gives 6

	cout << pow(2, 2) << endl; // gives 8

	cout << ceil(4.1676) << endl;	// gives 5
	cout << floor(4.8676) << endl;	// gives 4
	cout << ceil(-4.1676) << endl;	// gives -4
	cout << floor(-4.8676) << endl; // gives -5

	cout << abs(-4.775) << endl; // gives 4.775
}

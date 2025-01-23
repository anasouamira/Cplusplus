
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int number = 0;
	int i = 1;
	while (i <= 20) {

		cout << "Enter note : " << i << endl;
		cin >> number;

		if (number == 0) {continue;}
		int x;
		cout << "Enter -1 if you want to stop and if you want to continue Enter 0 : ";
		cin >> x;
		sum += number;

		if (x == -1) {break;}
		if(x == 0) {i += 1;}

		
	}

	cout << "the sum = " << sum <<endl;

}

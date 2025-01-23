

#include <iostream>
using namespace std;
int RedNumbersFromTo(int from, int to) {

	int number;
	cout << "Donner un nombre entre " << from << " et " << to << endl;
	cin >> number;

	while (number <= from || number >= to ) {
		cout << "Le nombre n'est pas entre " << from << " et " << to << endl;
		cout << "Donner le nombre autre foix : " << endl;
	    cin >> number;
	}
	return number;
}
int main()
{
	int from, to;
	cout << "chose tow number do you want, to chose number (from .. to) : " << endl;
	cout << " From :";
	    cin >> from;
	cout << " To : ";
		cin >> to;

	cout << " le nomber " << RedNumbersFromTo(from, to) << " est entre " << from << " et " << to << endl;
}

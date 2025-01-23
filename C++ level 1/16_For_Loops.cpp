// 15_For_Loops.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

void RedArrData(int Arr[100], int& length) {
	cout << "How meny numbers do you want to enter : ";
	cin >> length;

	for (int i = 0; i <= length - 1; i++) {
		cout << " Enter Number : " << i + 1;
		cin >> Arr[i];
	}
}
void PrintArrData(int Arr[100], int length) {
	for (int i = 0; i <= length - 1; i++) {

		cout << " "
	}
}

int main()
{
	int Arr[100], length = 0;
	// simple For loops :
	//for (int i = 0; i <= 10; i++) {cout << "ANAS" << endl;}

	return 0;
}


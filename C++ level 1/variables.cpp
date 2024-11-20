

#include <iostream>
using namespace std;

int main()
{
    // input direct  

    /*
    const string FullName = "Anas Ouamira ";
    int Age = 20;
    const float Length = 1.87;
    const double BachelorsRate = 12.39;
    const char Gender = 'M';
    */

    // input indirect 
    string FullName;
    int Date_Of_Increasing;
    float Length;
    double BachelorsRate;

    cout << " |please enter this informations for your self|\n";

    cout << "  your Full Name : ";
    cin >> FullName;

    cout << "  your Date of Increasing : ";
    cin >> Date_Of_Increasing;

    cout << "  your Bachelors Rate :";
    cin >> BachelorsRate;

    cout << "  your Length :";
    cin >> Length;
    cout << endl;

    // Identification Card 

    cout << " |Identification Card| \n";
    cout << "  *********************************\n";
    cout << "  Full Name : " << FullName << endl;
    cout << "  your Date of Increasing : " << Date_Of_Increasing << endl;
    cout << "  Length : " << Length << endl;
    cout << "  Bachelors Rate : " << BachelorsRate << endl;
    cout << " *********************************";





}
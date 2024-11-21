#include <iostream>
using namespace std;

int main()
{   // you can wrate this programe without [std::]  
    // like :  cout << "Name : anas ouamira "; 

    cout << " user information :\n\n";
    std::cout << "**************************\n";
    std::cout << " Name : anas ouamira\n";
    std::cout << " Age  : 20\n";
    std::cout << " City : Mrirt\n";
    std::cout << " Country : Morroco\n";
    std::cout << "**************************\n" << endl;


    // Escape sequences 
    cout << " some Escape sequences :\n\n";
    cout << " anas \t ouamira ==>\\t\n";
    cout << " my name is \" anas \" \n";
    cout << " my name is \' anas \'\n";
    cout << " anas \r ouamira ==>\\r \n";
    cout << " anas \f ouamira ==>\\f \n";
    cout << " anas \v ouamira ==>\\v \n" << endl;
    cout << "\a\n";


    return 0;
}
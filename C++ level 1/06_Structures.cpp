

#include <iostream>
#include <string>
using namespace std;

struct UserInfo
{

	string FullName;
	string Sex;
	unsigned short Age;
};
struct UserContactInfo
{

	string Email;
	string City;
	unsigned int Phone;
};
struct SubDate
{

	int day;
	int month;
	int year;
	int ValidityPeriod;
};
struct SubType
{

	string CourseArea;
	string DomainOfSpecialzation;
};
struct UserSubscriptionInfo
{

	SubDate UserSubeDate;
	SubType UserSubeType;
};
struct User
{
	UserInfo Information;
	UserContactInfo Contact;
	UserSubscriptionInfo Subscription;
};

void EterInfo(User &Persson)
{

	cout << "============================================\n";
	cout << " Enter this informatuon :\n";

	// user info :
	cout << " Full name : ";
	getline(cin, Persson.Information.FullName);

	cout << " Age : ";
	cin >> Persson.Information.Age;

	cout << " sex : ";
	cin >> Persson.Information.Sex;

	// user contact info :

	cout << " Email : ";
	cin >> Persson.Contact.Email;

	cout << " Phone : ";
	cin >> Persson.Contact.Phone;

	cout << " City : ";
	cin >> Persson.Contact.City;

	// User Subscription Info

	cout << " Day of Subscription : ";
	cin >> Persson.Subscription.UserSubeDate.day;

	cout << " month of Subscription : ";
	cin >> Persson.Subscription.UserSubeDate.month;

	cout << " Year of Subscription : ";
	cin >> Persson.Subscription.UserSubeDate.year;

	cout << " Validity Period : ";
	cin >> Persson.Subscription.UserSubeDate.ValidityPeriod;

	cout << " Course Area : ";
	cin >> Persson.Subscription.UserSubeType.CourseArea;

	cout << " Domain Of Specialzation : ";
	cin >> Persson.Subscription.UserSubeType.DomainOfSpecialzation;
	cout << "============================================\n\n";
}
void PrintInfo(User Persson)
{

	cout << "______________________________________________________\n";
	cout << "__[ Information Of user ]_____________________________\n";

	cout << " \n";

	cout << " Full name : " << Persson.Information.FullName << endl;
	cout << " Age : " << Persson.Information.Age << endl;
	cout << " sex : " << Persson.Information.Sex << endl;
	cout << " Email : " << Persson.Contact.Email << endl;
	cout << " Phone : " << Persson.Contact.Phone << endl;
	cout << " City : " << Persson.Contact.City << endl;
	cout << " Subscription Date : " << Persson.Subscription.UserSubeDate.month << "/" << Persson.Subscription.UserSubeDate.day << "/" << Persson.Subscription.UserSubeDate.year << endl;
	cout << " Validity Period : " << Persson.Subscription.UserSubeDate.ValidityPeriod << " years" << endl;
	cout << " Course Area : " << Persson.Subscription.UserSubeType.CourseArea << endl;
	cout << " Domain Of Specialzation : " << Persson.Subscription.UserSubeType.DomainOfSpecialzation << endl;
}

int main()
{
	User user[2]; // Array whith structures

	EterInfo(user[0]);
	EterInfo(user[1]);

	PrintInfo(user[0]);
	PrintInfo(user[1]);

	return 0;
}
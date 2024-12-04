#include <iostream>
#include <string>
using namespace std;

// Struct to hold user's basic information
struct UserInfo
{
	string FullName;	// Full name of the user
	string Sex;			// User's gender
	unsigned short Age; // User's age
};

// Struct to hold user's contact details
struct UserContactInfo
{
	string Email;		// Email address of the user
	string City;		// City where the user lives
	unsigned int Phone; // Phone number of the user
};

// Struct to hold subscription date and validity
struct SubDate
{
	int day;			// Day of subscription
	int month;			// Month of subscription
	int year;			// Year of subscription
	int ValidityPeriod; // Validity period of the subscription (in years)
};

// Struct to hold subscription type details
struct SubType
{
	string CourseArea;			   // Area of the course subscribed to
	string DomainOfSpecialization; // Domain of specialization in the course
};

// Struct to hold complete subscription information
struct UserSubscriptionInfo
{
	SubDate UserSubDate; // Subscription date information
	SubType UserSubType; // Subscription type details
};

// Main struct to combine all user information
struct User
{
	UserInfo Information;			   // Basic user information
	UserContactInfo Contact;		   // Contact details
	UserSubscriptionInfo Subscription; // Subscription information
};

// Function to enter user information
void EnterInfo(User &Person)
{
	cout << "============================================\n";
	cout << "Enter this information:\n";

	// Input basic user information
	cout << "Full name: ";
	cin.ignore(); // Clear the input buffer
	getline(cin, Person.Information.FullName);

	cout << "Age: ";
	cin >> Person.Information.Age;

	cout << "Sex: ";
	cin >> Person.Information.Sex;

	// Input user's contact details
	cout << "Email: ";
	cin.ignore(); // Clear the input buffer before using getline
	getline(cin, Person.Contact.Email);

	cout << "Phone: ";
	cin >> Person.Contact.Phone;

	cout << "City: ";
	cin.ignore(); // Clear the input buffer before using getline
	getline(cin, Person.Contact.City);

	// Input subscription details
	cout << "Day of Subscription: ";
	cin >> Person.Subscription.UserSubDate.day;

	cout << "Month of Subscription: ";
	cin >> Person.Subscription.UserSubDate.month;

	cout << "Year of Subscription: ";
	cin >> Person.Subscription.UserSubDate.year;

	cout << "Validity Period (years): ";
	cin >> Person.Subscription.UserSubDate.ValidityPeriod;

	cout << "Course Area: ";
	cin.ignore(); // Clear the input buffer before using getline
	getline(cin, Person.Subscription.UserSubType.CourseArea);

	cout << "Domain Of Specialization: ";
	getline(cin, Person.Subscription.UserSubType.DomainOfSpecialization);

	cout << "============================================\n\n";
}

// Function to print user information
void PrintInfo(const User &Person)
{
	cout << "______________________________________________________\n";
	cout << "__[ User Information ]________________________________\n\n";

	// Display basic user information
	cout << "Full name: " << Person.Information.FullName << endl;
	cout << "Age: " << Person.Information.Age << endl;
	cout << "Sex: " << Person.Information.Sex << endl;

	// Display contact details
	cout << "Email: " << Person.Contact.Email << endl;
	cout << "Phone: " << Person.Contact.Phone << endl;
	cout << "City: " << Person.Contact.City << endl;

	// Display subscription details
	cout << "Subscription Date: "
		<< Person.Subscription.UserSubDate.day << "/"
		<< Person.Subscription.UserSubDate.month << "/"
		<< Person.Subscription.UserSubDate.year << endl;

	cout << "Validity Period: " << Person.Subscription.UserSubDate.ValidityPeriod << " years" << endl;
	cout << "Course Area: " << Person.Subscription.UserSubType.CourseArea << endl;
	cout << "Domain Of Specialization: " << Person.Subscription.UserSubType.DomainOfSpecialization << endl;

	cout << "______________________________________________________\n";
}

int main()
{
	const int numUsers = 2; // Number of users to handle
	User user[numUsers];	// Array to store information for multiple users

	// Collect information for each user
	for (int i = 0; i < numUsers; i++)
	{
		EnterInfo(user[i]);
	}

	// Display information for each user
	for (int i = 0; i < numUsers; i++)
	{
		PrintInfo(user[i]);
	}

	return 0;
}

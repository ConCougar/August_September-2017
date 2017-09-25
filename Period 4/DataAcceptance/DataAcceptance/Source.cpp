/* Heading
Your Name - Date  Period

Assignment Name : Take in Data

Display Data, Accept User Response, Display Changed Data

*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int age; // What is your age?
	// void doesn't store value
	char first_initial; // First letter of your first name
	double money; // How much money do you have in your bank account?
	double myBankAccount = 0.1; // 10 cents 
	bool you_gots_mo_money;

	// User Queries 
	cout << "What is your age (in years) : ";
	cin >> age;
	cout << "What is the first letter of your first name : ";
	cin >> first_initial;
	cout << "How much money do you have in your bank account?";
	cin >> money;
	you_gots_mo_money = money > myBankAccount; // checks to see if you got more money
	
	// After questions print out stored data 
	cout << "Wow your " << age << " I thought you were... younger." << endl; // ENDL
	cout << "Your first letter was " << first_initial << " mine is T. \n"; // \n creates new line
	cout << "Wow you have $" << money << " in your account? " << '\n'; // \n creates a new line
	if (you_gots_mo_money) {
		cout << "What is your bank account number : ";
	}
	


	// Pause
	pause();
}
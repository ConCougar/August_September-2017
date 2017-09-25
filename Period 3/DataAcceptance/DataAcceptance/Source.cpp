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
	int age; // How old are you? 
	char first_letter; // Initial of your First Name?
	bool in_comp_sci; // Are you in or not?
	// void doesnt hold value 
	double GPA; // What is your GPA?
	
	int calc_1, calc_2, calc_3, calc_4, calc_5;

	// User Queries 
	cout << "How old are you? (in years)";
	cin >> age;
	cout << "What is the first letter in your first name : (Upper Case Letter)";
	cin >> first_letter;
	cout << "Are you in Computer Science (1) or Not (0) : (1/0) ";
	cin >> in_comp_sci;
	cout << "What is your GPA? (to the nearest hundredth place) : ";
	cin >> GPA;

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number : ";
	cin >> calc_2;
	cout << "Enter a number : ";
	cin >> calc_3;

	// After questions print out stored data 
	cout << "Your age is " << age << endl; // ENDL
	cout << "Your first initial is " << first_letter << '\n'; // different ways of going to the new line
	cout << boolalpha << "It is " << in_comp_sci << " that you are in Computer Science. \n";
	cout << "Your GPA is : " << GPA << "\n";
	
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl; // output doing math
	calc_4 = calc_2 * calc_3;
	cout << calc_2 << " * " << calc_3 << " = " << calc_4 << '\n';
	if (calc_4 < calc_2) {
		cout << "Calc_3 is less than one. " << endl;
	}
	// Pause
	pause();
}
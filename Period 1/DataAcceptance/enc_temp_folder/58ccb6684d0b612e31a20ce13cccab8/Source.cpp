/* Heading
Your Name - Date  Period

Assignment Name : Take in Data

Display Data, Accept User Response, Display Changed Data

*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()
#include <math.h> // power function pow

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
	int potato;
	float tomato;
	double tomatoes;
	bool beet_root = false; // assume no one has beet roots
	char frisk;
	int calc_1, calc_2, calc_3;

	// User Queries 
	cout << "How many potatoes do you have? ";
	cin >> potato; // int
	cout << "How much tomato sauce does the recipe call for in ounces? ";
	cin >> tomato; // float? 
	cout << "How many tomatoes do you think exist on the planet in mols? ";
	cin >> tomatoes;
	cout << "Do you have a beet root : Y/N ";
	cin >> frisk;
	if (frisk == 'Y' || frisk == 'y') {
		beet_root = true; // freely changes the value from false to true
	}
	
	// After questions print out stored data 
	cout << "You have " << potato << " number of potatoes. \n"; // \n creates a new line
	cout << "You need " << tomato << " ounces of tomato sauce for your recipe." << endl; // different type new line
	cout << "You think approximately " << tomatoes * 6.022 * pow(10.0, 23) << " tomatoes exist on the earth." << '\n';
	cout << boolalpha << "The answer evaluation of you have beet root is " << beet_root << endl;

	// Change Values

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << calc_3 << endl;
	// Pause
	pause();
}
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
	
	// User Queries 

	// After questions print out stored data 


	// Pause
	pause();
}
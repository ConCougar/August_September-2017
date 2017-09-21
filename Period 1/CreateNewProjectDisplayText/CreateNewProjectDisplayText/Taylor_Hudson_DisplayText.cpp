/*
Your Name - Date Period

Assignment Name : Display Text

Introduction into C++ IDE Visual Studios
Create New Project & Display Text to Console
*/

// Libraries
#include <iostream>
#include <conio.h> // gives access to _kbhit()

// Namespaces
using namespace std;

// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while(!_kbhit());
	cout << "\n";
}

// MAIN
void main() {
	// Display Text 
	cout << "Hello World!" << endl;
	pause();
	// no system(""); commands anymore
}
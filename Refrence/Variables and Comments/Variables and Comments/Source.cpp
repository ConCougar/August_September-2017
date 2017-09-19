/* 
Mr. Hudson - September 19, 2017
Variables and Comments

In this project we will model, and identify the opening parts of the C++ Program. 
I will walk you through the creation of an "Empty Project"
and give you access to not only this project but the one created in your specific 
class. I will create a template if you wish to create a basic
project template to start from. And give you access to it. 

*/

/* FIRST COMMENT Block Comment starts and ends with the forwardslash and asterick. */

// SECOND COMMENT Line Comment starts with double forward slash goes the rest 
//                of the line length

#include <iostream> //This is the first library we have to talk about
/*
iostream - gives us access to various functions and operators that are not "native" 
to the C++ enviroment without being access. Essentially the #include directs to a 
file that is full of code that could make several parts of our code more streamline, we 
can access code already written/generated that allows us to not have to do all the manual 
lifting ourselves. 

iostream : cout, cin, endl, >>, <<, boolalpha, noboolalpha 
Today we get access to these following opperators and functions. 
cout allows us to print out a text or values to the console as output. 
cin allows us to read in some variable from the console as input.
endl allows us to mimic the new line escape sequence, and flush the stream as well. 
(Flush will be mentioned later in the year)
>> - extraction operator, this is coupled with the cin statement to take information 
from the console and direct it into a specific variable
<< - insertion operator, this is coupled with the cout statement to print information 
to the console from the program
boolalpha - sets a flag that prints out "true" or "false" in place of 1 or 0(zero)
noboolalpha - resets the flag to print out 1's and 0's instead of the words "true" or "false"
*/

using namespace std;
/*
namespaces allow the global scope to be divided in sub-scopes. 
*/

void main() { // the function the computer looks for when compiling

	int x; // first line run, defines x
	x = 54; // assigns the value of 54 to the variable x
	
	char symbol_a = 'a'; // define and assign value
	char newLine = '\n'; /// Escape sequence "New Line"
	float phi = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890244970720720418939113748475;
	double phi_precise = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890244970720720418939113748475;
	double double_phi = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890244970720720418939113748475;
	bool isSame = phi == phi_precise;
	bool doubeSame = phi_precise == double_phi;

	cout << x << endl;
	cout << x << newLine;
	
	cout << "float and double value is same : " << isSame << newLine;
	
	cout << boolalpha << "boolalpha : " << endl;
	cout << "float and double value is same : " << isSame << endl;

	cout << "(float)" << phi << " : (double)" << phi_precise << " : (double)" << double_phi << newLine; 
	//Note that the appearance of the two data types is the same. 
	//The values stored are the same, but the evalutation is different 

	cout << "double and double value is same : " << doubeSame << newLine;

	cout << noboolalpha << "noboolalpha : " << newLine;
	cout << "double and double value is same : " << doubeSame << endl;

	system("pause");// Immediately closes without
	/*
	system("*") in place of the asterick you can use DOS Commands.	
	*/
	return; // return statement on void main is not necessary
}

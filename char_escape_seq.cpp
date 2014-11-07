// character escape sequences


#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	char string[] = "This is \' \" \\  \x40 \n \u03bc \ta string.";
	/*
	\x40 hexadecimal 40 in the ASCII table
	\n newline, line feed
	\t (horizontal) tab
	\u unicode
	\' single quote
	\" double quote
	\? question mark
	\\ backslash
	\0 null char
	\a audible bell
	\b backspace
	\f form feed
	\r carriage return
	\v vertical tab
	\nnn octal value
	\xnn hexadecimal value
	\unnnn Unicode value
	\Unnnnnnnn Unicode value
	*/

	cout << string << endl;
	return 0;
}




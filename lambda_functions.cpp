// lambda function 

#include <iostream>
#include <algorithm>
#include <locale>
using namespace std;

class fupper {
	char lastc;
public:
	fupper() : lastc(0) {}
	char operator() ( char c );
};

char fupper::operator() ( char c ) {
	if(lastc == ' ' || lastc == 0) {
		lastc = c; return toupper(c);
	} else {
		lastc = c; return tolower(c);
	}
}

int main( int argc, char ** argv ) {
	string s = "we could run this program to make the initial letter of each word in a section title in upper caps.";

//	transform( s.begin(), s.end(), s.begin(), fupper() );

	char lastc = 0;
	transform( s.begin(), s.end(), s.begin(),
	[ & lastc ] ( char c ) -> char {		// below: the first part of a lambda function. capturing as a reference
		if(lastc == ' ' || lastc == 0) {
			lastc = c; return toupper(c);
		} else {
			lastc = c; return tolower(c);
		}
	});

	cout << s << endl;

	return 0;
}



//lambda functions:
//1 []: capture a reference to the lastc variable, list variables that I want to use inside [].
//		without &, these vars will be used by value.
//		with &, the variable will be used by reference.
//2 ():
//3 -> int   or   -> char: return type, alternate syntax for expressing return type
//4 {}: body of the function
//
//
//What to put inside []:
//[] no external vars may be accessed
//[x, &y] x is captured by value, y is captured by reference
//[&] any external var is implicitly captured by reference if used
//[=] any external var is eimplicitly captured by value if used
//[&, x] x is captured by value, any other variables will be captured by reference
//[=, &z] z is captured by reference, any other variable will be captured by value





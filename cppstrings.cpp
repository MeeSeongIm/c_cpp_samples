
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	string cppstring = "This is a C++ string.";

	cout << "size of cppstring is: " << sizeof(cppstring) << endl;
	cout << cppstring << endl;

	for( unsigned int i = 0; cppstring[i]; i++) {
		printf("%02d: %c\n", i, cppstring[i]);
	}

	for( unsigned int i = 0; i < cppstring.size(); i++) {
		printf("%02d: %c\n", i, cppstring[i]);
	}

	for (char c: cppstring) {
		printf("%c\n",c);   			// iterator loop
	}

	for( auto it = cppstring.begin(); it != cppstring.end(); ++it ) {
		printf("%c\n",*it);
	}

	return 0;
}




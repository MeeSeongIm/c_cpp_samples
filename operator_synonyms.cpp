// operator synonyms


#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int a = 0;
	int b = 1;

	if (a && b) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	if (a and b) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	int c = 49;
	int d = 113;
	int e = c & d;  					// bitwise and
	cout << "e is " << e << endl;

	int f = c bitand d;  				// bitand is a text alias
	cout << "f is " << f << endl;

/*	int g = & d;
	cout << "g is " << g << endl; */ 		// trying to assign the address of d to g

	int bitand h = d;
	cout << "h is " << h << endl;

	int & k = d;
	cout << "k is " << k << endl;

	return 0;
}


/*other text aliases:

and &&
bitand &
and_eq &=
or ||
bitor |
or_eq |=
xor ^
xor_eq ^=
not !
not_eq !=
compl ~*/




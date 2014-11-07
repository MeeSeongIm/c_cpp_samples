
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	char cstring[] = "String";

	cout << "length of array: " << sizeof(cstring) << endl;  // last byte holds null
	cout << cstring << endl;

	for( unsigned int i = 0; cstring[i]; i++) {
		printf("%03d: %c\n", i, cstring[i]);
	}
	return 0;
}



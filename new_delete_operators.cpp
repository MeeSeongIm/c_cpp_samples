// new and delete operators
// whenever new is used, delete must also be used.


#include <iostream>
#include <cstddef>  		// NULL is used in this header file.
using namespace std;

const long int _count = 10000;

int main( int argc, char ** argv ) {
	printf("allocate space for %lu ints at *ip with new\n", _count);
	int * ip = new (nothrow) int [_count];  // nothrow
	// use new operator to allocate memory for _count integers
	// new operator returns a pointer

	
	if(ip == NULL) {
		cerr << "new failed." << endl;  // if IP equals null, print an error message that new failed and return a failure code.
		return 1;
	}
	
	for( int i = 0; i < _count; i++ ) {  // otherwise, go through count pointers incrementing the pointers and populate this data structure with integers.
		ip[i] = i;
	}
	for( int i = 0; i < _count; i++ ) {
		printf("%d:%d ", i, ip[i]);
		if((i > 0 && i % 25 == 0) || i == _count - 1) cout << endl;
	}
	
	delete [] ip;						// use delete to delete the space.
	cout << "space at *ip deleted" << endl;
	
	return 0;
}






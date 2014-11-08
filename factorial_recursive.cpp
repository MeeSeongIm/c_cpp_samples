// factorial: recursive example.
// resources allocated and not deallocated until the last one is returned.
// not efficient for large n.


#include <iostream>
using namespace std;

unsigned long int factorial( unsigned long int n ) {
	if( n < 2 ) return 1;
	return factorial( n - 1 ) * n;
}

// the function calls itself 10 times.
int main( int argc, char ** argv ) {
	unsigned long int n = 10;
	cout << "factorial of " << n << " is " << factorial(n) << endl;
	return 0;
}


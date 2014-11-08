// factorial: using a loop.
// More memory efficient.

#include <iostream>
using namespace std;

// loop implemented below. 
unsigned long int factorial( unsigned long int n ) {
	if( n < 2 ) return 1;
	unsigned long int result = n;
	while(n>1) result *= --n;
	return result;
}

// the function calls itself 10 times.
int main( int argc, char ** argv ) {
	unsigned long int n = 10;
	cout << "The factorial of " << n << " is " << factorial(n) << endl;
	return 0;
}


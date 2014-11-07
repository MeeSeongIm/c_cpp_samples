// MACROS

#include <stdio.h>

//#define CONSTANT 1
#define MACRO1(a,b) (a * b)
#define MAX(a,b) (a > b ? a: b)
#define MIN(a,b) (a < b ? a: b)

int main( int argc, char ** argv ) {
	int this = 5;
	int that = 7;
	printf("This is %d, that is %d, and the result is %d.\n",
			this, that, MACRO1(this, that));

	printf("The max of %d and %d is %d.\n",
			this, that, MAX(this, that));

	printf("The min of %d and %d is %d.\n",
			this*this, that*that, MIN(this*this, that*that));

	return 0;
}




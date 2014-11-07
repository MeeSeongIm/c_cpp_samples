// text replacements.


#include <stdio.h>

#define ONE 1  // string substitution, text replacements.
#define TWO "Two"

const int iOne = 1;

int main( int argc, char ** argv ) {
	printf("The constant is %d\n", ONE);
	printf("The second constant is %s\n", TWO);
	const int * ip = &iOne;								// create a pointer and take its address.
	printf("The third constant is %d\n", *ip);
	return 0;
}






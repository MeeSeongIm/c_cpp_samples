//  increment
// be careful: increment gets call each time increment() is written.

#include <stdio.h>

#define MAX(a,b) ( (a) > (b) ? (a) : (b) )

int increment() {
	static int i = 42;
	i = i+5;
	printf("increment returns %d\n", i);
	return i;
}



int main( int argc, char ** argv ) {
	int x = 50;
	printf("max is %d\n", MAX(x, increment()));

	printf("\n");

	printf("max is %d\n", MAX(x, increment()));
	return 0;
}






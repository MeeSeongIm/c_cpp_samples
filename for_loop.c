// for-loops


#include <stdio.h>

int main( int argc, char ** argv ) {
	for (int x=5; x; --x) {
		printf("x is %d\n", x);
	}

	printf("\n");

	for (int i =0; i < 5; ++i) {
		printf("i is %d\n", i);
	}

	printf("\n");

	int i =0;						// declare a variable and initialize it.
	for ( ; i< 5; ++i) {			// empty initializing clause of the for-loop
		printf("i is %d\n", i);
	}

	printf("\n");

	int ia[] = {1,2,3,4,5,0};
	for (int *ip = ia; *ip; ++ip) { 			//integer immutable pointer, iterator
		printf("value is %d\n", *ip);
	}

	printf("\n");

	int y = 5;
	while(y) {
		printf("y is %d\n", y);
		--y;
	}
	return 0;
}




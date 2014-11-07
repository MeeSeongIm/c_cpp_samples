// while-loop

#include <stdio.h>

int main( int argc, char ** argv ) {
	int x = 5;
	int y = 5;
	int z = 5;
	int w = 5;
	int u = 5;
	int v = 5;
	while (x > 0) {
		printf("x is %d\n", x);
		--x;
	}

	printf("\n");

	while (y) {
		printf("y is %d\n", y);
		--y;
	}

	printf("\n");

	do {
		printf("z is %d\n", z);
		--z;
	} while(z);

	printf("\n");

	while(--w) {
		printf("w is %d\n", w);  // results will be one less than 5 since decrement is done before printf.
	}

	printf("\n");

	do {
		printf("u is %d\n", u);
	} while(--u);				// pre-decrement

	printf("\n");

	do {
		printf("v is %d\n", v);
	} while(v--);				// post-decrement, goes down to 0.

	return 0;
}



// conditionals


#include <stdio.h>

int main( int argc, char ** argv ) {
	int a = 1;   						// 1 == True
	int b = 0; 	 						// 0 == False
	int c = 0;
	int d = 0;
	int f = 8;
	if (a) {puts("a is true.");
	} else {
		puts("a is not true.");
	}

	if(b) {
		puts("b is true.");
	} else {
		puts("b is not true.");
	}


	if(c) {
		puts("c is true.");
	} else if(d) {
		puts("d is true.");
	} else {
		puts("Neither c nor d is true.");
	}

// ternary conditional operator with True and False operands
	int e = a ? 7: 9;
	printf("e is %d.\n", e);

	int g = (f == 5) ? (1) : (2);
	printf("g is %d.\n", g);

	return 0;
}






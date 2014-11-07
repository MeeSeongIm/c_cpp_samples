// header file.

#include <stdio.h>
#include "func.h"

//void func();  	// declare a function. Inside func.h
int i;				// declare a variable



int main( int argc, char ** argv ) {
	printf("int i is %d.\n", i);

	func();

	for (int i = 0; i < 5; ++i) {
		printf("int i is %d.\n", i);
	}

	return 0;
}


int i = 33;

void func() {
	printf("this is in the function\n");     // definition
}




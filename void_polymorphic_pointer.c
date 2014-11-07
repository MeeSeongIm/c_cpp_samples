// void pointer: don't know, don't care what type it is.
// polymorphic pointer

#include <stdio.h>

void * func( void * );

int main( int argc, char ** argv ) {
	printf("this is void-pointer.c\n");

	char * cp = "1234"; 		// char pointer
	int * vp = func(cp);		// integer pointer
	printf("%08x\n", * vp);

	return 0;
}

void * func ( void * vp ) {		// void pointer
	return vp;					// byte order of the Intel processor is backwards
}

/*
 *this is void-pointer.c
 *34333231
 *
 *in hexadecimal, it is 31323334
 */



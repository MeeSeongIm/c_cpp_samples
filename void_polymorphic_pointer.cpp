// void pointer: polymorphic typeless pointer.
// C++ is more strict
// the value for void is return type or is a parameter type, enforcing
// a rule preventing use where value would be expected.


#include <stdio.h>

void * func( void * );

int main( int argc, char ** argv ) {
	printf("this is a void-pointer.c\n");

	const char * cp = "1234";
	int * vp = (int *) func( (void *) cp );
	printf("%08x\n", * vp);

	return 0;
}

void * func ( void * vp ) {
	return vp;
}




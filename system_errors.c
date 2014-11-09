// system errors
// attempt to erase a file that doesn't exist.
#include <stdio.h>
#include <errno.h>
#include <string.h>


int main( int argc, char ** argv ) {
	printf("errno is: %d\n", errno);
	printf("Erasing file foo.bar\n");
	remove("foo.bar");
	printf("errno is: %d\n", errno);
//	perror("Couldn't erase file"); // followed by a string interpretation of the error number in errno

	printf("the error message is: %s\n", strerror(errno));


	return 0;
}


/*
void perror( const char *s ); // prints a string to the standard error followed by the error string translated from errno
char * strerror( int errnum ); // points a pointer to the error string in errno
*/




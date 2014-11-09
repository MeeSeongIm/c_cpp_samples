// memory allocation


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char ** argv ) {
	const static int strSize = 1024;
	const char * source = "This is a string";
	char * string = NULL;	// pointer for allocated memory

	printf("Allocating space for string.\n");
	string = calloc( strSize, sizeof(char) ); // (number of things being allocated, size of the things being allocated). calloc = allocates and frees up memory
//	string = malloc( strSize * sizeof(char) );
	if(string == NULL) {
		fputs("cannot allocate memory\n", stderr);
		return 1;
	}

	strncpy(string, source, strSize);
	printf("The string is: %s\n", string);

	printf("Freeing string space.\n");
	free(string);
	string = NULL;	// not necessary, but a good idea

	return 0;
}



/*void * malloc (size_t size );		// returns a void pointer, which can easily convert to any other type of a pointer
void free ( void * ptr ); 			// frees up memory
void * calloc (size_t num, size_t size );*/

// (new and delete) and (malloc and free) are not compatible: don't use them together.





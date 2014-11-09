// unformatted character I/O
#include <stdio.h>



int main( int argc, char ** argv ) {
	puts("Print this sentence.");		// automatically prints each line on a new line
	puts("Print this sentence.");
	puts("Print this sentence.");

	fputs("Print this sentence.", stdout);  // new lines are printed at the end.
	fputs("Print this sentence.", stdout);	// allowed to write to a file
	fputs("Print this sentence.", stdout);

	FILE * out = fopen("file.txt", "w");
	fputs("this is a string\n", out);
	fclose(out);

	char s[128];   				// string buffer
	FILE * in = fopen("file.txt", "r"); 	// open file to read
	fgets(s, 128, in);  			// (string buffer, max of that size minus one char so it can be terminated, in buffer)
	fclose(in);   				// in buffer
	printf(s);				// display to screen

	return 0;
}


/*
char * fgets( char * s, int count, FILE * fh );
int fputs( const char * s, FILE * fh );
int puts( const char * s );


fgets will return a pointer to the result string or a null if it gets to the end of a file,
	and it takes its first argument a pointer to a character buffer,
	the second argument the size of that buffer, and it'll get a maximum of that size minus one character,
	and the pointer to the file handle.
fputs returns an integer. On success it'll be a nonnegative value and on error it'll return EOF.
puts is similar to fputs with two differences. Always sends a string to the standard out
	so it doesn't have a parameter for the file handle, and it always puts a new line at the end of the string.
*/





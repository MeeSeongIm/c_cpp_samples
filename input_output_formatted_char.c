// input output formatted character


#include <stdio.h>

int main( int argc, char ** argv ) {
	int i = 5;
	long int li = 1234567890L;
	char * s = "This is a string.";
	printf("i is %d, li is %ld, s is %s\n", i, li, s);

	fprintf(stdout, "i is %d, li is %ld, s is %s\n", i, li, s);

	fprintf(stderr, "i is %d, li is %ld, s is %s\n", i, li, s);

	FILE * of = fopen("file.txt", "w");
	fprintf(of, "i is %d, li is %ld, s is %s\n", i, li, s);
	fclose(of);

/*	char os[1024];
	sprintf(os, "i is %d, li is %ld, s is %s\n", i, li, s); // print to a string to the char buffer, possibly security risk.
	puts(os);*/

	const int bufsize = 128;
	char os[bufsize];
	snprintf(os, bufsize, "i is %d, li is %ld, s is %s\n", i, li, s); // will limit its output to the size of the buffer
	// arguments = (address of the buffer, size of the buf, prints at most that many char -1 and then terminate with a NULL char)
	puts(os);
	return 0;
}


/*format specifiers:
%d integer
%f floating point number
%s C-string
%c character
%p pointer
%% the % character

int printf( const char * format, ... );
int fprintf( FILE * fh, const char * format, ... );
int sprintf( char * buf, const char * format, ... );
int snprintf( char * buf, size_t bufsize, const char * format, ... );

printf: takes a format string and a variable number of arguments.
fprintf: takes a file pointer and a format string and a variable number of arguments.
sprintf: takes a character buffer and a format string and a variable number of arguments. Do not recommend.
snprintf: takes that character buffer and integer that represents the size of the character buffer
	and so it will print out most of that size -1 characters to the buffer plus the NULL byte and a format string
	and a variable number of arguments.*/




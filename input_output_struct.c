// struct input and output


#include <stdio.h>
#include <string.h>
#include <stdint.h>

enum { slen = 128 };
struct s1 {
	uint8_t a;		// byte used as an integer, not as a character, uint8_t is a typedef and is in int.h header file.
	uint8_t b;
	char s[slen];
};

int main( int argc, char ** argv ) {
	const char * fn = "test.file";			// file name
	const char * str = "This is a literal C-string.\n";

	// create/write the file
	printf("writing file\n");
	FILE * fw = fopen(fn, "wb");		// wb = write in binary mode

	struct s1 buf1;
	for( int i = 0; i < 5; i++ ) {
		buf1.a = i;
		buf1.b = strlen(str);
		strncpy(buf1.s, str, slen);		// slen == max length of the buffer
		fwrite(&buf1, sizeof(struct s1), 1, fw); // arguments = (buffer, size of buf, number of buf, file handle)
	}

	fclose(fw);
	printf("done.\n");

	// read the file
	printf("reading file\n");
	FILE * fr = fopen(fn, "rb");
	struct s1 buf2;
	int rc;
	while(( rc = fread(&buf2, sizeof(struct s1), 1, fr) )) {
		printf("a: %d, b: %d, s: %s", buf2.a, buf2.b, buf2.s); // a = integer, b = length of string, s = string
	}

	fclose(fr);
	printf("done.\n");

	return 0;
}

/*
FILE * fopen( const char * filename, const char * mode );
char * fgets( char * str, int count, FILE * stream );
int fputs( const char * str, FILE * stream );
size_t fread( void * buffer, size_t size, size_t count, FILE * stream );
int fwrite( const void * buffer, size_t size, size_t count, FILE * stream );


fopen opens a file in a number of different modes,
fgets reads a file in a line-oriented mode.
	It returns a character pointer to the same buffer that you're passing it actually in the first argument.
	It will return null when it gets to the end of the file.
fputs writes a string out to the file and returns a nonnegative number for success, and it returns eof on failure.
fread reads a buffer of a certain size, and that size is specified in the second argument,
	the number of buffers is specified in the third argument so you can read more than one buffer at a time.
	It returns the number of buffers that are read successfully, and it will return 0 at the end of the file.
fwrite does the inverse of fread: it writes a buffer, takes the pointer of the buffer, the size of the buffer,
	the number of buffers and the file handle.
	It also returns a nonnegative number on success, or eof on failure.

The mode strings for fopen look like this. There are three basic mode strings: r, w, and a.
r opens a file for reading
w opens a file for writing
a opens a file for append
r+ opens a file for read and write, and it positions the pointer at the beginning of the file for reading.
w+ opens a file for read and write, but just like opening a file for write, it will destroy a file if it already exists or create a file if a file doesn't exist.
a+ opens a file for read/write, and it positions the pointer at the end for writing just like if you're going to open the file for append.
b flag opens a file in binary mode on operating systems that distinguish between text and binary files like Microsoft Windows,
	and it's ignored on operating systems that do not make that distinction.
*/








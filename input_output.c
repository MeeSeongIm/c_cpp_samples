// file-io

#include <stdio.h>

int main( int argc, char ** argv ) {
	const char * fn = "test.file";			// file name test.file
	const static int maxString = 1024;		// read buffer size
	const char * str = "This is a literal C-string.\n";

	// create/write the file
	printf("writing file\n");
	FILE * fw = fopen(fn, "w");  			// FILE== structure for file handle, (filename, mode string)
	for(int i = 0; i < 5; i++) {
		fputs(str, fw);				// fputs == line-oriented write
	}
	fclose(fw);
	printf("done.\n");

	// read the file
	printf("reading file\n");
	char buf[maxString];				// buffer
	FILE * fr = fopen(fn, "r");			// fr == file handle open for read
	char * rc;
							// double parenthesis: assigning and testing in the same expression in the while-loop
	while(( rc = fgets(buf, maxString, fr) )) {  	// fgets is the complement to fputs to read the file, fgets reads one line at a time
		printf(buf);
	}
	fclose(fr);
	printf("done.\n");

	return 0;
}



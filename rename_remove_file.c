// file management


#include <stdio.h>

int main( int argc, char ** argv ) {
	const char * fn1 = "file1";
	FILE * fh = fopen(fn1, "w");  // filename, mode string. w == if the file doesn't exist, will be created. if it does exist, it will override it with an empty file.
	fclose(fh);
	puts("file created.");

	const char * fn2 = "file2";
	rename(fn1, fn2); 			// rename file rename(old name, new name)

	const char * fn3 = "file3";
	rename(fn3,fn2);
	remove(fn2);
	puts("file deleted.");
	return 0;
}




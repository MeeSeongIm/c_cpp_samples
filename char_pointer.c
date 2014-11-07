// an array and a character pointer.

#include <stdio.h>

int main( int argc, char ** argv ) {
	char s[] = {'s', 'a', 'm', 'p', 'l', 'e', 0};  // null terminator
	printf("string is: %s.\n", s);

	char t[] = "sample";
	printf("string is: %s.\n", t);

	for (int i = 0; s[i]!=0;++i){
		printf("Char is %c.\n", s[i]);
	}

	printf("\n");

	for (char * cp = s;  *cp; ++cp) {  // char pointer
		printf("Char is %c.\n", *cp);
	}

	return 0;
}




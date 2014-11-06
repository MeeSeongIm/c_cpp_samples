#include <stdio.h>

enum {max_length = 127};
static char response[max_length];

int main( int argc, char ** argv ) {
	printf("First Name: ");
	fflush(stdout);
	fgets(response, max_length, stdin);
	printf("First name is %s\n", response);
	printf("Last Name: ");
	fflush(stdout);
	fgets(response, max_length, stdin);
	printf("Last name is %s\n", response);
	return 0;
}




#include <stdio.h>

int main (int argc, char ** argv) {
	printf("Print this line to the Console. \n");
	fprintf(stdout, "Black font.\n");
	fprintf(stderr, "Red font. \n");
	printf("\n");
	fprintf(stderr, "Lines do not print in order. \n");
	return 0;
}





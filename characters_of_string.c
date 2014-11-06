
#include <stdio.h>

int main( int argc, char ** argv ) {
	int x = printf("This is a sample code involving printing the number of characters in this line.\n");
	printf("printf returned %d.\n", x);
	printf("\n");
	int y = printf("The number of chars in this line is...\n");
	printf("%d.\n", y);
	return 0;
}




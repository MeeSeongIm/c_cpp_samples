
#include <stdio.h>

int main( int argc, char ** argv ) {
	for (int i = 1; i <= 10; i++) {
		printf("The square of %d is %d.\n", i, i*i);
		printf("\n");
	}
		int x = printf("This is a sample code involving printing the number of characters in this line.\n");
		printf("printf returned %d.\n", x);
		printf("\n");
		int y = printf("The number of chars in this line (times 100) is...\n")*100;
		printf("%d.\n", y);
	return 0;
}




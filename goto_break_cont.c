//goto, break, continue



#include <stdio.h>

int main( int argc, char ** argv ) {
	for (int i =0; i < 10; ++i) {
		if (i == 4) continue;  			// skip 4
		if (i == 8) break;				// stop executing the loop when i = 7
		printf("i is %d.\n", i);
	}


	printf("Before the goto.\n");
	goto target;
	printf("After the goto.\n");
	target:
	printf("After the target.\n");
	return 0;
}



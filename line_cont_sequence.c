// line continuation sequence using the backslash


#include <stdio.h>

#define SWAP(a,b) do {  \
						a ^= b;   \
						b ^= a;   \
						a ^= b;   \
				} while(0)  				// exclusive or



int main( int argc, char ** argv ) {
	int this = 17;
	int that = 91;
	printf("this is %d and that is %d\n", this, that);
	SWAP(this, that);
	printf("this is %d and that is %d\n", this, that);
	printf("Tes\
ting some breaks. \n");
	return 0;
}





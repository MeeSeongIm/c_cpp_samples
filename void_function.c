// functions


#include <stdio.h>
					// forward declaration with function signature.
void func();  				// func() declared. Does not return a value, takes no arguments

int main( int argc, char ** argv ) {
	func();
	return 0;
}

void func() {				// func() defined
	printf("this is func().\n");
}




// null pointer: defined as a 0 value void pointer.
//


#include <iostream>
using namespace std;

#ifndef NULL
#define NULL 0 /* standard C++ definition */
#endif

void f( int i ) { 						// f takes an integer pointer
	printf("the int is %d\n", i);
}

void f( char * s ) {					// f takes a character pointer
	printf("the pointer is %p\n", s);
}

int main( int argc, char ** argv ) {
	f(nullptr);
	f(0);
	//	f(NULL);
	return 0;
}



//the pointer is 0000000000000000
//the int is 0



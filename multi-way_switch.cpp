// multi-way conditional or multi-way switch
// C++ has a default setting. 


#include <stdio.h>

const int iOne = 1;  // immutable integer constant
const int iTwo = 2;
const int iThree = 3;
const int iFour = 4;



int main( int argc, char ** argv ) {
	int foo = 2;
	switch(foo) {
	case 1:
		puts("one");
		break;
	case 2:
		puts("two");
		break;
	case 3:
		puts("three");
		break;
	case 4:
		puts("four");
		break;
	}

	int today = 6;
	switch(today) {
	case iOne:
		puts("one");
		break;
	case iTwo:
		puts("two");
		break;
	case iThree:
		puts("three");
		break;
	case iFour:
		puts("four");
		break;
	default:
		puts("default");
		break;
	}

	return 0;
}






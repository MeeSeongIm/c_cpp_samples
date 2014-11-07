// multi-way conditional or multi-way switch


#include <stdio.h>


# define ONE (1)  // macro, a preprocessor directive, not compiled. A list of constants
# define TWO (2)
# define THREE (3)
# define FOUR (4)

int main( int argc, char ** argv ) {
	int foo = 3;
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

	int today = 2;
	switch(today) {
	case ONE:
		puts("one");
		break;
	case TWO:
		puts("two");
		break;
	case THREE:
		puts("three");
		break;
	case FOUR:
		puts("four");
		break;
	}

	return 0;
}





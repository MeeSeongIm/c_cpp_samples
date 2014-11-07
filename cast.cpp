// cast operator



#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int i;
	i = sizeof(int);
	printf("value is %d\n", i);

	printf("value is %d\n", (int) sizeof(int));
	// cast: put the type in parenthesis to the left of the object that I want to convert
	// works in C and C++: put the type in parenthesis

	printf("value is %d\n", int(sizeof(int)));
	// take the type and put the value in the parenthesis
	// works only in C++

	return 0;
}




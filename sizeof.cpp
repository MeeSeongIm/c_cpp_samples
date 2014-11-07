// sizeof: the size of a type
// useful when I need to find out how much memory is occupied by an object
// and how much storage to allocate.

#include <iostream>
using namespace std;


struct S {
	int a;
	int b;
	char c;
	char d;
	long int e;
	long int f;
};



int main( int argc, char ** argv ) {
	int i;
	printf("size is %d\n", (int) sizeof(size_t)); // long unsigned int
	printf("size is %d\n", (int) sizeof(int)); 	// returns in bytes
	printf("size is %d\n", (int) sizeof i);    // in the case of a variable
	printf("size is %d\n", (int) sizeof(int));  // the size of a type needs to be effectively cast: must be inside a parenthesis

	struct S s;
	printf("size is %d\n", (int) sizeof(struct S));  // output doesn't appear to be correct. Should get 32 bytes.
	printf("size is %d\n", (int) sizeof(s));

	return 0;
}






// references (the other option: use pointers)
// ir 			reference type

#include <iostream>
using namespace std;


int & f(int & i) {
	return ++i;
}

int & g(int & j) {
	return ++j;
}


int main( int argc, char ** argv ) {
	int i = 5;
	int & ir = i;
	ir = 10;
	f(i);  // the function has incremented something outside the function.
	printf("i is %d\n", i);

	int j = 5;
	int & jr = j;
	jr = 10;
	g(j) = 44; // operator overload
	printf("j is %d\n", j);
	return 0;
}

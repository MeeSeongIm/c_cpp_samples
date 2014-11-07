// pointers, members, indirection ops.


#include <iostream>
using namespace std;

struct S {
	int a;
	int b;
	int c;
};

struct T {
	int d;
	int e;
	int f;
};

int main( int argc, char ** argv ) {
	struct S s = { 1, 2, 3 };
	printf("s has members a: %d, b: %d, c: %d\n", s.a, s.b, s.c);
	// get the members of the structure directly


	struct T t = { 1, 2, 3};
	struct T * sp = &t;
	printf("t has members d: %d, e: %d, f: %d\n",
			sp-> d, sp-> e, sp-> f);
	// pointer dereferencing operator
	// get the members of the structure indirectly.


	return 0;
}

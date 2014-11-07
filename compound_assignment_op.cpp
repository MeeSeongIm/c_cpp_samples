// compound assignment operators

#include <iostream>
using namespace std;

int & f( int & i ) {
	puts("this is f()");
	return ++i;
}

int & g( int & i ) {
	puts("this is g()");
	return ++i;
}



int main( int argc, char ** argv ) {
	int x = 5;
	int y = 5;
//	x = x+ y;   						// x is evaluated twice
//	x += y; 							// x is evaluted once
	printf("result is %d\n", f(x) += 1); // LHS is evaluated once, compound operator.
	printf("x is %d\n", x);

	printf("result is %d\n", g(y) = g(y) + 1); // LHS is evaluated twice, separate operator: math operation and the assignment.

	return 0;
}





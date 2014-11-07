// functions in C


#include <stdio.h>
#include "func_functions.h"

void func() {							// void == not legal to return anything.
	int i = 0;							// declare and initialize a variable.
	printf("this is in the function\n");
	i += 25;
	printf("i is %d\n", i);

}

int funct() {
	int i = 0;
	i += 30;
	return i;
}

int fn() {
	int i = 0;
	i += 55;
	return i;
}

int variable(int * y) {
	int i = 0;
	*y = 100;
	i += *y;
	return i;
}

// declaration of function signature:
// return value, name, any parameter types (actual variable names not necessary)
//int func_sign(int v);

int main( int argc, char ** argv ) {
	printf("testing.\n");

	func();

	printf("value is %d\n", funct());

	int x = fn();
	printf("int value is %d\n", x);

//	int w = variable(100);			// call by value, copy this onto the function.
//	printf("var value is %d\n", w);

	int z = 1000;
	int y = variable(&z);  // address of the operator, pass by value, call by reference
	printf("z value is %d\n", y);
	printf("z is %d\n", z);

	int w = 50;
	int v = func_sign(w);
	printf("v function value is %d\n", v);
	return 0;
}


int func_sign(int v) {
	int i =0;
	v = 100;
	i += v;
	return i;
}


// function pointer




#include <stdio.h>

void func();

int main( int argc, char ** argv ) {
	void (*fptr)() = func;
	(*fptr)();
	return 0;
}

void func() {
	printf("this is func()\n");
}





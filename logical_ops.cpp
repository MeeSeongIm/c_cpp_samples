// logical ops.


#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	if(true) {
		puts("true");
	} else {
		puts("false");
	}

	if(false) {
		puts("true");
	} else {
		puts("false");
	}

	if(1) {
		puts("true");
	} else {
		puts("false");
	}

	if(0) {
		puts("true");
	} else {
		puts("false");
	}


	int x = 7;
	int y = 9;
	if(x==y) {
		puts("true");
	} else {
		puts("false");
	}

	if(true && true) {
		puts("true");
	} else {
		puts("false");
	}

	if(true || false) {
		puts("true");
	} else {
		puts("false");
	}

	if(!true) {
		puts("true");
	} else {
		puts("false");
	}

	if(false ^ false) {
		puts("true");
	} else {
		puts("false");
	}

	if(false ^ true) {
		puts("true");
	} else {
		puts("false");
	}

	return 0;
}




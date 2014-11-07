
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int i = 47;
	i = 112;
	printf("The integer i is %d\n", i);


	const int j = 47;
//	j = 1112;
	printf("The integer j is %d\n", j);

// i is the iterator, j is the auto class var. j is stored in disposable auto memory.
	for (int i = 0 ; i < 5; ++i) {
		int j = 12;
		j += i;
		printf("i is %d, j is %d\n", i, j);
	}


// static int. j is now stored in static memory.
// it gets initialized once, but it will continue to accumulate its value.
	for (int i = 0 ; i < 5; ++i) {
		static int j = 12;
		j += i;
		printf("i is %d, j is %d\n", i, j);
	}



	return 0;
}


/*
 * storage class: static, register, extern
 * type qualifiers: const, volatile, mutable
 * */




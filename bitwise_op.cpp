// bitwise operators.


#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	unsigned int x = 0x50;
	unsigned int y = 10;
	printf("%08x %08x %08x\n", x, y, x & y);  // bitwise and
	printf("%08x %08x %08x\n", x, y, x | y);  // bitwise or
	printf("%08x %08x %08x\n", x, y, x ^ y);  // bitwise exclusive or
	printf("%08x %08x %08x\n", x, y, ~x);  // bitwise not
	printf("%08x %08x %08x\n", x, y, x << 4);  // bitwise shift left by 4 bits op.
	printf("%08x %08x %08x\n", x, y, x >> 4);  // bitwise shift right by 4 bits op.
	return 0;
}





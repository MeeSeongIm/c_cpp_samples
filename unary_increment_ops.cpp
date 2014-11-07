// unary increment and decrement ops.


#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int i = 12;
	int j = 12;
	float k = 12;
	++i;
	printf("i value is %d\n", i);
	printf("j value is %d\n", ++j);  // increment first before printing the new value j
	printf("j value is %d\n", ++j);  // prefix
	printf("j value is %d\n", ++j);

	printf("k value is %f\n", k++); // return value first and then increment
	printf("k value is %f\n", k++); // postfix
	printf("k value is %f\n", k++);

	char s1[] = "string";
	char * c = s1; 			// char pointer
	printf("value is %c\n", *c++);	// post increment
	printf("value is %c\n", *c++);
	printf("value is %c\n", *c++);
	printf("value is %c\n", *c++);


	int i1[] = {1,2,3,4,5};
	int * ip = i1; 			// integer pointer, strongly typed.
	printf("value is %d\n", *ip++);	// post increment
	printf("value is %d\n", *ip++);
	printf("value is %d\n", *ip++);
	printf("value is %d\n", *++ip);

	int i2[] = {31,32,33,34,35, 0};
	for(int  * ip= i2; *ip; ++ip) {
		printf("value is %d\n", *ip);
	}
	return 0;
}




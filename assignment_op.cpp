// assignment operator. copies from right to left.

#include <iostream>
using namespace std;

struct s {
	int a;
	int b;
	int c;
};

int main( int argc, char ** argv ) {
	int i, j, k, l;
	i = 5;
	j = i; 								// assign i to j
	k = l = i;
	cout << "i is " << i << endl;
	cout << "j is " << j << endl;
	cout << "k is " << k << endl;
	cout << "l is " << l << endl;

	struct s s1 = {1,2,3};			// equal sign is the initialization operator as opposed to the assignment op.
	struct s s2, s3;
	s3 = s2 = s1;					// assignment
	printf("s1: a is %d, b is %d, c is %d\n", s1.a, s1.b, s1.c);
	printf("s2: a is %d, b is %d, c is %d\n", s2.a, s2.b, s2.c);
	printf("s3: a is %d, b is %d, c is %d\n", s3.a, s3.b, s3.c);
	return 0;
}




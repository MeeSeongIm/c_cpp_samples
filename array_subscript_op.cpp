// array subscript op used for indexing arrays and containers.


#include <iostream>
using namespace std;


// subscripting pass the array is an undefined behavior.
int main( int argc, char ** argv ) {
	int ia[] = {1,2,3,4,5};
	int i = 3;

	printf("value is %d\n", ia[i]);

	string s = "string";
	int j = 5;
	printf("value is %c\n", s[j]);


	return 0;
}



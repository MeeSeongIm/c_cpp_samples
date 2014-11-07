
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	char c;
	unsigned char d;
	short int si;
	int i;
	long int li;
	long long int lli;

	cout << "size of char c is " << sizeof(c) << endl;
	cout << "size of short int si is " << sizeof(si) << endl;
	cout << "size of int i is " << sizeof(i) << endl;
	cout << "size of long int li is " << sizeof(li) << endl;
	cout << "size of long long int lli is " << sizeof(lli) << endl;
	cout << endl;

	i = 12345;
	li = 12345L;
	//12345L 					long, literal value
	//12345LL  					long long
	//12345U					unsigned int
	//12345UL					unsigned long
	//12345ULL					unsigned long long

	printf("i is %d\n", i);
	printf("li is %ld\n", li);

	printf("c = 127\n");
	c = 127;
	printf("c is %d\n", c);
	c++;
	printf("after increment, c is %d\n", c);

	printf("\n");

	printf("d = 127\n");
	d = 127;
	printf("d is %d\n", d);
	d++;
	printf("after incremenet, d is %d\n", d);


	return 0;
}




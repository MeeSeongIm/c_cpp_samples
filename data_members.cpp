// data members

#include <iostream>
using namespace std;

struct A {		// data members in a struct default to public
	int ia;
	int ib;
	int ic;
};

class B {		// data members in a class default to private
public:			// without the word public, int ia, int ib, int ic are private.
	int ia;
	string sb;
	int ic;
};


int main( int argc, char ** argv ) {
	A a = {1,2,3};
	printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);

	B b = {1,"two",3};
	printf("ia is %d, ib is %s, ic is %d\n",
			b.ia, b.sb.c_str(), b.ic);
	return 0;
}




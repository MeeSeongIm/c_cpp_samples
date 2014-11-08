// accessors
// in a class, have private data members.
// use function methods as accessors to access the private data members.

#include <iostream>
using namespace std;

class A {
	int ia;
	string sb;
	int ic;
public:			// public methods
	A ( const int a, const string & b, const int ic ) : ia(a), sb(b), ic(3) {}; // constructors
	void seta ( const int a ) { ia = a; }										// setters
	void setb ( const string & b ) { sb = b; }									// setters
	void setc ( const int c ) { ic = c; }										// setters
	int geta () const { return ia; } 											// getters
	const string & getb () const { return sb; }									// getters
	const char * getb_cstr () const { return sb.c_str(); }						// getters
	int getc () const { return ic; }											// getters
};

int main( int argc, char ** argv ) {
	A a(1, "two", 3);
	printf("ia is %d, sb is %s, ic is %d\n", a.geta(), a.getb_cstr(), a.getc());
	return 0;
}




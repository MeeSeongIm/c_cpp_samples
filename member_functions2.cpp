// member functions that act as methods for the class


#include <iostream>
using namespace std;

class A {
	int ia;
public:										// public interface methods
	void setA ( const int a ) { ia = a; }	// accessors to access private data member/s
	int getA () { return ia; }
};

int main( int argc, char ** argv ) {
// class type, object (an instance of the class)
	A a;
	a.setA(33);
	cout << a.getA() << endl;
	return 0;
}



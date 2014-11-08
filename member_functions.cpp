// member functions that act as methods for the class


#include <iostream>
using namespace std;

// class interface without the definitions of function members
// move to A.hpp
class A {
	int ia;
public:										                                        // public interface methods
	void setA ( const int a );
	int getA ();
	int getA () const; 						                                  // const safe
};

// implementation which is the function members by themselves
// move to A.cpp
void A::setA ( const int a ) {
	ia = a;
}

int A::getA () {
	cout << "this is the mutable getA()" << endl;                   // not const safe
	return ia;
}

int A::getA () const {
	cout << "this is the const getA()" << endl;                     // const safe
	return ia;
}

int main( int argc, char ** argv ) {
// class type, object (an instance of the class)
	A a;
	a.setA(33);
	const A b = a;								                                  // an object b of type a, copied a into b.
//	const A b = a; // error:
	cout << "a is " << a.getA() << endl;		                        // get mutable getA
	cout << "b is " << b.getA() << endl;		                        // get const getA
	return 0;
}



// overloading operators with functions
// In C++, one has to tell operators how to work with classes.
// For this purpose, we will write our own code for some operators.
// This is called Operator Overloading.


#include <iostream>
using namespace std;

class A {
	int a;
public:
	A ( int a ) : a(a) {};
	int value() { return a; }
};

// int: return value
// operator: tells the commpiler that this is an operator overload
// +: operator being overloaded.
int operator + (A & lhs, A & rhs ) {
	cout << "operator + for class A" << endl;
	return lhs.value() + rhs.value();  // value method which is called an accessor: used to access a private variable.
}


// class A has two objects a and b.
int main( int argc, char ** argv ) {
	A a(13);
	A b(400);
	cout << "add the two up: " << a + b << endl;  // add two objects
	return 0;
}

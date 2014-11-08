// class, members in classes in C++ always default to private access.
// the following could be in at least 3 separate files.
#include <iostream>
using namespace std;


class Class1 {
	int i;										// data member, private since not specified
public:
	void setValue( int value ) { i = value; }  	// public member
	int getValue() { return i; }				// public member
};

// interface, in a header file
class Class2 {
	int j;
public:
	void setValue( int value );
	int getValue();
};

// implementation of methods (function members) defined in class Class2, create and move to Class2.cpp
void Class2::setValue( int value) {
	j = value;
}

// implementation of methods defined in class Class2, create and move to Class2.cpp
int Class2::getValue() {
	return j;
}


// create and move to *.cpp
int main( int argc, char ** argv ) {
	int i = 24;									// not the same i in Class1
	Class1 object1;
	object1.setValue(i);
	cout << "value is " << object1.getValue() << endl;


	int j = 33;
	Class2 object2;
	object2.setValue(j);
	cout << "value is " << object2.getValue() << endl;

	return 0;
}




//  constructors and destructors


#include <iostream>
using namespace std;


class Class1 {
	int i;					// data member of Class1
public:
	void setValue( int value ) { i = value; }
	int getValue() { return i; }
};

int main( int argc, char ** argv ) {
	int i = 43;
	Class1 object1; // default constructor is a constructor that takes no arguments

	cout << "value is " << object1.getValue() << endl; // implicit default constructor sets the value of our private data member to zero.
	object1.setValue(i);
	cout << "value is " << object1.getValue() << endl;
	return 0;
}



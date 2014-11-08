// pointing to the current object with *this pointer
// useful when overloading an assignment operator,
// we want to return a reference to the current object
// so that our assignments can be chained.


#include <iostream>
using namespace std;


class Class1 {
	int i;							// data member i
public:
	void setValue( int value ) { i = value; }
	int getValue() { return i; }
	void lookAtThis( int i);
};

void Class1::lookAtThis( int i ) {		// argument i
	printf("i is %d\n", i);
}



class Class2 {
	int j;							// data member j
public:
	void setValue( int value ) { j = value; }
	int getValue() { return j; }
	void lookAtThis2( int j);
};

void Class2::lookAtThis2( int j ) {		// argument j
	printf("j is %d\n", j);
	printf("object j is %d\n", this->j);
	// access j from the class scope by using a pointer 'this' to the current object
	printf("this is %p\n", this); // print out a pointer
}


int main( int argc, char ** argv ) {
	int i = 47;							// argument i
	Class1 object1;

	object1.setValue(i);
	object1.lookAtThis(9);				// printed argument i
	cout << "value is " << object1.getValue() << endl;

	int j = 29;
	Class2 object2;

	object2.setValue(j);
	object2.lookAtThis2(7);
	cout << "value is " << object2.getValue() << endl;
	printf("object2 is %p\n", &object2);

	return 0;
}

// the i from the local scope overrides the i from the class scope




// typeid: type of an object



#include <iostream>
#include <typeinfo>
using namespace std;

struct A {};
struct B {};

int main( int argc, char ** argv ) {
	struct A a1;
	struct A a2;
	struct B b1;
	struct B b2;

	if(typeid(a1) == typeid(struct A)) {
		cout << "same" << endl;
	} else {
		cout << "different" << endl;
	}

	if(typeid(a1) == typeid(struct B)) {
		cout << "same" << endl;
	} else {
		cout << "different" << endl;
	}

	if(typeid(a1) == typeid(a2)) {
		cout << "same" << endl;
	} else {
		cout << "different" << endl;
	}

	if(typeid(a1) == typeid(b2)) {
		cout << "same" << endl;
	} else {
		cout << "different" << endl;
	}

	cout << typeid(a1).name() << endl;
	cout << typeid(a2).name() << endl;
	cout << typeid(int).name() << endl;
	cout << typeid(struct B).name() << endl;
	cout << typeid(string).name() << endl;

	return 0;
}



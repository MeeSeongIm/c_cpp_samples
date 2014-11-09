// distributing multiple exceptions to a code


#include <iostream>
#include <exception>
using namespace std;

class myexception : public exception {  // myexception inherits the base class exception
	string s;
public:
	myexception( const char * message ) : s(message) {}
	const char * what() const throw(); // what() == virtual function, overload it.
};

const char * myexception::what() const throw() {	// throw() == not allowed to throw any exceptions
	return s.c_str();
	//	return "oh nooo!";								// return C-string
}

const myexception e_ouch("ouch");
const myexception e_bad("bad");
const myexception e_worse("this is worse.");
const myexception e_broken("this is broken");

void broken() {
	cout << "this is a broken function" << endl;
	throw e_worse;
	//throw myexception("ouch!");
	//throw myexception();
}

int main( int argc, char ** argv ) {
	try {
		cout << "let's have an emergency!" << endl;
		broken();
	} catch ( exception & e ) {
		cout << e.what() << endl;
	}

	cout << "this is still running!" << endl;

	return 0;
}



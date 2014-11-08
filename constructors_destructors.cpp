// constructors and destructors

#include <iostream>
using namespace std;

const static string unk = "unknown";
const static string clone_prefix = "clone-";

class Animal {
	string _type;
	string _name;
	string _sound;
//	Animal(){}	                      // declare default constructor in private: it cannot be called, cannot be seen from outside
public:
	Animal();	                          // default constructor (b/c it has no arguments)
	Animal(const string & type, const string & name, const string & sound); //constructor with 3 arguments, each is a string

	Animal(const Animal &);	            // copy constructor since this constructor has as its single argument another object of the same type
	Animal & operator=(const Animal &);	// copy operator, operator overload. It returns a reference to the object itself, and it takes as its parameter a reference to an object of the same type.
	~Animal();	                        // destructor
	void print() const;	                // print method to print out these objects
};

Animal::Animal() : _type(unk), _name(unk), _sound(unk) { // implementation for the default constructor. constructor initializer list: initialize the data members without getting into the body of the function.
	cout << "default constructor" << endl;				         // body of a function
}

Animal::Animal(const string & type, const string & name, const string & sound)
: _type(type), _name(name), _sound(sound) {
	cout << "constructor with arguments" << endl;
}

Animal::Animal(const Animal & a) {
	cout << "copy constructor" << endl;
	_type = a._type;
	_sound = a._sound;
	_name = clone_prefix + a._name;      // copy constructor
}

Animal::~Animal() {				            // since all objects go out of scope, all are destructed in reverse order.
	cout << "destructor: "
			<< _name << " the " << _type
			<< endl;
}

void Animal::print () const {
	cout << _name << " the " << _type
			<< " says " << _sound << endl;
}

Animal & Animal::operator=(const Animal & o) {  // the Rule of Threes: if you need to overload any of the implicit methods (the copy constructor, the destructor, or the copy operator), then overload all three.
	cout << "assignment operator" << endl;
	if(this != &o) {
		_type = o._type;
		_name = clone_prefix + o._name;
		_sound = o._sound;
	}
	return *this;
}

int main( int argc, char ** argv ) {
	Animal a;				// construct an object with a default constructor
	a.print();

	const Animal b("goat", "billy", "baah");
	b.print();

	const Animal c = b;                   // copy constructor
	c.print();

	a = c;			                          // assignment operator
	a.print();

	return 0;
}


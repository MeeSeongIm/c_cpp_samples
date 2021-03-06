// inheritance. Accessing the base class. Multiple inheritance.

#include <iostream>
using namespace std;

// Base class
class Animal {
	string _name;
	string _type;
	string _sound;
	// private constructor prevents construction of base class
	Animal(){};
protected:
	// protected constructor for use by derived classes
	Animal ( const string & n, const string & t, const string & s )
		: _name(n), _type(t), _sound(s) {}
public:
	void speak() const;
	const string & name() const { return _name; }
	const string & type() const { return _type; }
	const string & sound() const { return _sound; }
};


void Animal::speak() const {
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

class Fur {
	string _type;
	Fur(){}
protected:
	Fur(const string & f) : _type(f) {}
public:
	const string & type() const { return _type; }
};


class Dog : public Animal {
	int walked;
public:
	Dog( string n ) : Animal(n, "dog", "woof"), walked(0) {};
	int walk() { return ++walked; }
};


// Cat is deriving from two base classes
class Cat : public Animal, public Fur {
	int petted;
public:
	Cat( string n ) : Animal(n, "cat", "meow"), Fur("silky"), petted(0) {};
	int pet() { return ++petted; }
	void grooming();
};

void Cat::grooming() {
	cout << Animal::name() << " grooms her " << Fur::type() << " fur" << endl;
}

class Pig : public Animal {
	int fed;
public:
	Pig( string n) : Animal(n, "pig", "oink"), fed(0) {};
	int feed() { return ++fed; }
	string latin() const;
};


string Pig::latin() const {
	return string(Animal::name() + "ay");
}

int main( int argc, char ** argv ) {
	Dog d("Rover");
	Cat c("Fluffy");
	Pig p("Wilbur");

	d.speak();
	c.speak();
	p.speak();

	cout << d.name() << " the dog has been walked " << d.walk() << " times" << endl;
	cout << c.name() << " the cat has been petted " << c.pet() << " times" << endl;
	cout << p.name() << " the pig has been fed " << p.feed() << " times" << endl;
	cout << p.latin() << endl;
	c.grooming();
}



// inheritance, friend class

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


class Dinosaur {
	string _name;
	string _type;
	string _sound;
	Dinosaur(){};
	Dinosaur ( const string & n, const string & t, const string & s )
		: _name(n), _type(t), _sound(s) {}
	friend class TyrannosaurusRex;		// allows all of the private members of the base class to the derived classes.
	friend class Triceratops;
	friend class Brachiosaurus;
	friend const string & get_dinosaur_name( const Dinosaur & );
public:
	void speak() const;
	const string & name() const { return _name; }
	const string & type() const { return _type; }
	const string & sound() const { return _sound; }
};

void Animal::speak() const {
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

void Dinosaur::speak() const {
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

// derived class: a class derived from the base class
class Dog : public Animal {
	int walked;
public:
	Dog( string n ) : Animal(n, "dog", "woof"), walked(0) {};
	int walk() { return ++walked; }
};

class Cat : public Animal {
	int petted;
public:
	Cat( string n ) : Animal(n, "cat", "meow"), petted(0) {};
	int pet() { return ++petted; }
};

class Pig : public Animal {
	int fed;
public:
	Pig( string n ) : Animal(n, "pig", "oink"), fed(0) {};
	int feed() { return ++fed; }
};

class TyrannosaurusRex : public Dinosaur {
	int ate;
public:
	TyrannosaurusRex( string n ) : Dinosaur(n, "tyrant lizard", "grrr") , ate(0) {};
	int eat() { return ++ate; }
};

class Triceratops : public Dinosaur {
	int slept;
public:
	Triceratops( string n ) : Dinosaur(n, "herbivore", "growl"), slept(0) {};
	int sleep() { return ++slept; }
};

class Brachiosaurus : public Dinosaur {
	int walked;
public:
	Brachiosaurus( string n ) : Dinosaur(n, "sauropod", "munch"), walked(0) {};
	int walk() { return ++walked; }
};

const string & get_dinosaur_name( const Dinosaur & a) {
	return a._name;
//	return a.name(); // accessor and delete friend const string & get_dinosaur_name( const Dinosaur & );
}

int main( int argc, char ** argv ) {
	Dog d("Rover");
	Cat c("Fluffy");
	Pig p("Arnold");

	TyrannosaurusRex r("Rex");
	Triceratops a("Doedicurus");
	Brachiosaurus b("Buck");

	d.speak();
	c.speak();
	p.speak();

	r.speak();
	a.speak();
	b.speak();

	cout << d.name() << " the dog has been walked " << d.walk() << " times" << endl;
	cout << c.name() << " the cat has been petted " << c.pet() << " times" << endl;
	cout << p.name() << " the pig has been fed " << p.feed() << " times" << endl;
	cout << d.name() << " the dog has been walked " << d.walk() << " times" << endl;
	cout << d.name() << " the dog has been walked " << d.walk() << " times" << endl;

	cout << r.name() << " the tyrant lizard ate " << r.eat() << " times" << endl;
	cout << a.name() << " the herbivore slept " << a.sleep() << " times" << endl;
	cout << b.name() << " the sauropod walked " << b.walk() << " times" << endl;

	cout << "The Brachiosaurus is named " << get_dinosaur_name(a) << endl;
}




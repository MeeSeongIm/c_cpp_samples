// overload_op_nonmem_fns_ratl.cpp
// overloading operators with nonmember functions
// manipulating rational numbers.


#include <iostream>

class Rational {
	int _n;
	int _d;
public:
	Rational ( int numerator = 0, int denominator = 1 ) : _n(numerator), _d(denominator) {};
	Rational ( const Rational & rhs ) : _n(rhs._n), _d(rhs._d) {};	// copy constructor
	~Rational ();
	inline int numerator() const { return _n; };
	inline int denominator() const { return _d; };
	Rational & operator = ( const Rational & );
/*	Rational operator + ( const Rational & ) const;
	Rational operator - ( const Rational & ) const;
	Rational operator * ( const Rational & ) const;
	Rational operator / ( const Rational & ) const;*/
};

Rational & Rational::operator = ( const Rational & rhs ) {
	if( this != &rhs ) {
		std::cout << "assignment" << std::endl;
		_n = rhs.numerator();
		_d = rhs.denominator();
	}
	return *this;
}


Rational::~Rational() {
	std::cout << "destructor: " << _n << '/' << _d << std::endl;
}

// operators are now outside the function
Rational operator + ( const Rational & lhs, const Rational & rhs ) {
	return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()),
			lhs.denominator() * rhs.denominator());
}

Rational operator - ( const Rational & lhs, const Rational & rhs ) {
	return Rational((lhs.numerator() * rhs.denominator()) - (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}

Rational operator * ( const Rational & lhs, const Rational & rhs ) {
	return Rational(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}

Rational operator / ( const Rational & lhs, const Rational & rhs ) {
	return Rational(lhs.numerator() * rhs.denominator(), lhs.denominator() * rhs.numerator());
}


// useful for std::cout
std::ostream & operator << (std::ostream & o, const Rational & r) {
	return o << r.numerator() << '/' << r.denominator();
}

int main( int argc, char ** argv ) {
	using namespace std;

	Rational a = 7;		// 7/1
	cout << "a is: " << a << endl;
	Rational b(5, 3);	// 5/3
	cout << "b is: " << b << endl;
	Rational c = b;		// copy constructor
	cout << "c is: " << c << endl;
	Rational d;			// default constructor
	cout << "d is: " << d << endl;
	d = c;				// assignment operator
	cout << "d is: " << d << endl;
	Rational & e = d;	// reference
	d = e;				// assignment to self!
	cout << "e is: " << e << endl;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	cout << a << " + " << 14 << " = " << a + 14 << endl;
	cout << 14 << " + " << a << " = " << 14 + a << endl;
	cout << 7 << " * " << a << " = " << 7 * a << endl;
	cout << 1 << " / " << a << " = " << 1 / a << endl;

	return 0;
}

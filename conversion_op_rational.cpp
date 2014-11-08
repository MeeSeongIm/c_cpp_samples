// using conversion operators: overload a cast operator for casting a class to another type.
// rational


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
	Rational operator + ( const Rational & ) const;
	Rational operator - ( const Rational & ) const;
	Rational operator * ( const Rational & ) const;
	Rational operator / ( const Rational & ) const;
	operator std::string () const;						// conversion operator
};

Rational & Rational::operator = ( const Rational & rhs ) {
	if( this != &rhs ) {
		std::cout << "assignment" << std::endl;
		_n = rhs.numerator();
		_d = rhs.denominator();
	}
	return *this;
}

Rational Rational::operator + ( const Rational & rhs ) const {
	return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator - ( const Rational & rhs ) const {
	return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * ( const Rational & rhs ) const {
	return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / ( const Rational & rhs ) const {
	return Rational(_n * rhs._d, _d * rhs._n);
}

Rational::~Rational() {
	std::cout << "destructor: " << _n << '/' << _d << std::endl;
}

Rational::operator std::string () const {
	const static int maxstring = 64;			// declare a constant for the size of our string
	char s[maxstring];							// c-string
	snprintf(s, maxstring, "%d/%d", _n, _d);	// printf type of formatting with a string, with a maximum length
	return std::string(s);						// return the string as an operand to a string class constructor
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

	string s = "Rational as a string: ";
	s += b;					// concatenate one of the rat'l numbers to the end of string s, but we need to first build a function to print the value of b in num over denom notation. Before constructing this function, we see that there is no match for operator '+=' in s += b.
	cout << s << endl;

	return 0;
}




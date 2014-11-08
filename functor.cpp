// functor: a class that operates as if it were a function.
// Important for circumstances where we need to keep state or
// other context info with our function calls.


#include <iostream>
using namespace std;

class MultBy {
	int mult;
public:
	MultBy ( int n ) : mult(n) {}
	int operator () ( int n ) { return mult * n; }
};

int main( int argc, char ** argv ) {
	MultBy times4(4);
	MultBy times10(10);
	MultBy times15(15);
	MultBy times9(9);
	cout << "times4(5) is " << times4(5) << endl;
	cout << "times4(15) is " << times4(15) << endl;
	cout << "times10(5) is " << times10(5) << endl;
	cout << "times10(15) is " << times10(15) << endl;
	cout << "times15(5) is " << times15(5) << endl;
	cout << "times15(15) is " << times15(15) << endl;
	cout << "times9(3) is " << times9(3) << endl;
	cout << "times9(-3) is " << times9(-3) << endl;
	return 0;
}


// overloading function names
// in C, functions are distinguished only by their name
// in C++, functions are distinguished by their function signatures.


#include <iostream>
using namespace std;

// volume of a cube
int volume( int s ) {
	cout << "cube of " << s << endl;
	return s * s * s;
}

// volume of a cylinder
double volume( double r, int h ) {
	cout << "cylinder of " << r << " x " << h << endl;
	return 3.14159 * r * r * h;
}

// volume of a cuboid
long volume( long a, long b, long c ) {
	cout << "cuboid of " << a << " x " << b << " x " << c << endl;
	return a * b * c;
}

double volume(double r) {
	cout << "sphere of radius " << r << endl;
	return 3.14159 * r * r * r * 4/3;
}



int main( int argc, char ** argv ) {
	cout << "volume of a 2 x 2 x 2 cube: " << volume(2) << endl;
	cout << "volume of a cylinder, radius 2, height 2: " << volume( 2.0, 2 ) << endl;
	cout << "volume of a 2 x 3 x 4 cuboid: " << volume(2, 3, 4) << endl;
	cout << "volume of a sphere of radius 2: " << volume(2.0) << endl;
	return 0;
}




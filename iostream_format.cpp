// iostream formatting.



#include <iostream>
#include <iomanip>  		// to manipulate io
using namespace std;

int main( int argc, char ** argv ) {
	// cout is a very common class from iostream
	cout << "sample script\n";

	string istr = "";
	cout << "Prompt: ";
	cin >> istr;	// cin class takes one word at a time
	cout << "Input: " << istr << endl; // cin has put one word in our istr string

	// integer formatting
	int i1 = 42;
	int i2 = 127;
	int i3 = 5555;
	cout << "default: " << i1 << ' ' << i2 << ' ' << i3 << endl;
	cout << "hex: " << hex << i1 << ' ' << i2 << ' ' << i3 << endl;  // call hex
	cout << "hex with showbase: " << showbase << hex <<
			i1 << ' ' << i2 << ' ' << i3 << endl;
	cout << "octal with showbase: " << oct <<
			i1 << ' ' << i2 << ' ' << i3 << endl;
	cout << "default: " << noshowbase << dec <<		// dec == decimals
			i1 << ' ' << i2 << ' ' << i3 << endl;

	// floating point formatting options
	double d1, d2, d3;
	d1 = 3.1415926534;
	d2 = 1234.5;
	d3 = 4.2e-10;
	cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
	cout << "fixed: " << fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl; // fixed number of digits
	cout << "scientific: " << scientific
			<< d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
	cout << "fixed (3): " << setprecision (3) << fixed
			<< d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
	cout << "scientific (7): " << setprecision (7) << scientific <<
			d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
	cout.unsetf(ios_base::floatfield);			// back to default
	cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;

	// string formatting options
	string s1 = "This is a string.";
	string s2 = "This is a much longer string.";
	string s3 = "This is the third string to be investigated. This is the longest string of the three.";

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	cout << setw(64) << right << s1 << endl;		// right-flush. setw(64) == set width to 64 char.
	cout << setw(64) << right << s2 << endl;
	cout << setw(64) << right << s3 << endl;

	cout << setfill('-') << setw(64) << right << s1 << endl;
	cout << setfill(' ') << setw(64) << right << s1 << endl;
	cout << left << s1 << endl;						// left-flush.

	return 0;
}




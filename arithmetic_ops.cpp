// (integer) arithmetic operators.


#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int i = 5;
	int j = 42;
	printf("result is %d\n", i+j);
	printf("result is %d\n", i-j);
	printf("result is %d\n", i*j);
	printf("result is %d\n", j/i); 	// integer division
	printf("result is %d\n", j%i);	// modulo op

	float a = 89.2;
	float b = 31.1;
	printf("result is %f\n", a+b);
	cout << "result is " << a- b << endl;
	cout << "result is " << a* b << endl;
	cout << "result is " << a/ b << endl;
//	cout << "result is " << a % b << endl;  // the modulo part has no meaning with floating numbers

	double c = 89.2;
	double d = 31.1;
	printf("result is %f\n", c+d);
	cout << "result is " << c- d << endl;
	cout << "result is " << c* d << endl;
	cout << "result is " << c/ d << endl;
//	cout << "result is " << c % d << endl;  // the modulo part doesn't make sense with double numbers

	double e = 24.44;
	printf("unary is %f\n", -e);
	printf("unary is %f\n", +e);


// concatenate, add two strings together!
// operator overload
	string s1 = "this is a string. ";
	string s2 = "this is another string. ";
	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;
	cout << "concatenation is: " << s1 + s2 << endl;

	return 0;
}


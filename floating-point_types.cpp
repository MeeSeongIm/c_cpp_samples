
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	float f;
	double df;
	long double ldf;

	cout << "size of float f is " << sizeof(f) << endl;						//in bytes. In bits, multiply this by 8.
	cout << "size of double float df is " << sizeof(df) << endl;			//in bytes. In bits, multiply this by 8.
	cout << "size of long double float ldf is " << sizeof(ldf) << endl;		//in bytes. In bits, multiply this by 8.

	f = 0.1;
	f += 0.1 + 0.1;
	cout << "f is " << f << endl;
	if (f == 0.3) cout << "yes" << endl;  // f does not equal 0.3.
	else cout << "no" << endl;


	return 0;
}

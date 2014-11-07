// comparison, relational ops.
// for more complex types, program by overloading the operators.



#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int x = 5;
	int y = 5;
	if (x!=y) {
		cout << "x does not equal y" << endl;
	}
	if (x==y) {
		cout << "x equals y" << endl;
	} else if (x > y) {
		cout << "x is greater than y" << endl;
	} else {
		cout << "x is less than y" << endl;
	}

	return 0;
}




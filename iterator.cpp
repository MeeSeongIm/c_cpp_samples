// iterator
#include <iostream>
#include <vector>
using namespace std;

int main( int argc, char ** argv ) {
	// from initializer list (C++11)
	cout << "vector from initializer list (C++11): " << endl;
	vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int>::iterator it;	// vector iterator

	auto beginning = vi1.begin();
//	vector<int>::iterator beginning = vi1.begin(); // save for later

	// input iterator, e.g., database, single directional type with changing values
	for(it = vi1.begin(); it < vi1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// forward iterator allows re-iteration of same set with same results
	// use beginning value saved before previous iteration
	for(it = beginning; it < vi1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// bidirectional iterator -- iterate backwards, e.g., decrement iterator
	// allows it--
	for(it -= 1; it >= beginning; it--) {
		cout << *it << " ";
	}
	cout << endl;

	// random access iterator
	// allows += and -= access
	it = beginning + 7;
	cout << *it << " ";
	it -= 3;
	cout << *it << " ";
	it += 4;
	cout << *it << " ";
	cout << endl;

	// output iterator
	// may write to object via iterator
	for(it = beginning; it < vi1.end(); it++) {
		*it = 0;
	}
	for(it = beginning; it < vi1.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}



/*
// five types of iterators:
// input iterator: allows reading from an iterator object in one direction exactly once, doesn't have multipass guarantee
// forward iterator: read object with the multipass guarantee
// bidirectional iterator: read both forward and backward and with multipass guarantee
// random access iterator: read from the iterator object randomly with multipass guarantee
// output iterator: write to the iterator object, iterate forward without the multipass guarantee
*/




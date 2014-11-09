// range-based for loop


#include <iostream>
#include <vector>
using namespace std;

int main( int argc, char ** argv ) {
	int ia[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // integer array
	vector<int> iv(ia, ia + ( sizeof(ia) / sizeof(int) ) );

	for( int & i : ia ) ++i;  // & i == actual elements

	for( int i : ia ) {			// i == copy of elements of ia
		cout << i << " ";
	}
	cout << endl;

	for( int & i : iv ) i *= 5;

	for( int i : iv ) {
		cout << i << " ";
	}
	cout << endl;

	for( int i : {1,2,3,4,5} ) { // temp container provided by the initializer list
		cout << i << " ";
	}

	return 0;
}




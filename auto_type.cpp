// auto type

#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;


int func() {
	return 42;
}

string fun() {
	return "this is a string";
}

// typeid is an operator that returns a typeinfo object and this typeinfo object
// has a method called name.

int main( int argc, char ** argv ) {
	auto x = func();						// x is an int, auto x == int x
	cout << x << endl;
	cout << typeid(x).name() << endl;

	auto y = fun();							// x is a string, auto x == string x
	cout << y << endl;
	cout << typeid(y).name() << endl;

	vector<int> i = {1,2,3,4,5};			// vector
	for(vector<int>:: iterator it = i.begin(); it != i.end(); ++it) {
		cout << *it << endl;
	}

	cout << endl;

	vector<int> j = {5,4,3,2,1};
	for(auto it = j.begin(); it != j.end(); ++it) {
		cout << *it << endl;
	}

	return 0;
}






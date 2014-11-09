// declare a pair, tuple
#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

int main( int argc, char ** argv ) {
	pair<int, string> p( 42, "forty-two" );
	cout << p.first << " " << p.second << endl; // print the first arg, space, second arg

	p = make_pair<int, string>(112, "one-one-two");
	cout << p.first << " " << p.second << endl;


//	tuple<string, int, string> t1( "one", 2, "three" );
	tuple<string, string, string> t1( "one", "two", "three" ); // an array with more than one type
	cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;

	string a, b, c;
	tie(a, b, c) = t1; // assign tuple t1 to the tuple that gets returned a tie.
	cout << a << " " << b << " " << c << endl;  // values of t1 have been copied to the strings a, b, c.

	tuple<string, string, string> t2;
	tie(get<2>(t2), get<1>(t2), get<0>(t2)) = t1; // assigning values of t1 to t2 in reverse order, i.e., to the tie in a different (!) order
	cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << endl;

	return 0;
}



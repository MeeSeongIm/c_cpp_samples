// template function


#include <iostream>
using namespace std;

template <typename Type> Type maxof ( Type a, Type b ) {
	return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
	cout << maxof( 7, 9 ) << endl;
	cout << maxof( "aaaaa", "baaaa" ) << " is greater" << endl;
	cout << maxof( "aaaaa", "baaaaaaaaa" ) << " is greater" <<endl;
	cout << maxof<string>( "aaaaa", "baaaa" ) << " is greater" << endl;
	return 0;
}



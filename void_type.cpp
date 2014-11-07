/*
 *  void type is not used for variables.
 *  Can't create a variable of void type, can't assign any value to it,
 *  can't take any value from it.
 *  Only used for function parameters and function returns.
 */


#include <iostream>
using namespace std;

void func( void );

int main( int argc, char ** argv ) {
	cout << "void-type.c" << endl;
	func();
	return 0;
}

void func ( void ) {
	cout << "this is func()" << endl;
}





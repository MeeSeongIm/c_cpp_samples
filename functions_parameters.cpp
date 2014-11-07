// functions with parameters.



#include <iostream>
using namespace std;

// put type int inside of the function signature.
void func(int);

void funct(int *);

// use references, instead of pointers.
void functi(int &);


void fun(const string &);

// functions always pass by value.
int main( int argc, char ** argv ) {
	int i = 7;
	func(i);
	printf("i is %d\n", i);

	funct(&i);
	printf("i is %d\n", i);

	functi(i);
	printf("i is %d\n", i);

	string s = "this is a long string with many words in it.";
	fun(s);
	printf("s is %s\n", s.c_str());



	return 0;
}


// give in a name
void func(int i) {
	i = 132;
	printf("in func(), i is %d.\n", i);
}


void funct(int * i) {
	*i = 132;
	printf("in func(), i is %d.\n", *i);
}


// almost no syntax!
void functi(int & i) {
	i = 132;
	printf("in func(), i is %d.\n", i);
}



void fun(const string & s) {
//	printf("in func(), s is %s.\n", s.c_str());
	cout << "in fun() " << s << endl;
}



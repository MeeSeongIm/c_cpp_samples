// type inference, using auto


#include <iostream>
#include <typeinfo>		// using typeid
using namespace std;

template<typename lhsT, typename rhsT>
auto tf(lhsT lhs, rhsT rhs) -> decltype(lhs + rhs) {
	return lhs + rhs;
}

int main( int argc, char ** argv ) {
	int i = 47;													// var defn
	const char * cstr = "this is a c-string";					// var defn
	string sclass = string("this is a string class string");	// var defn

	auto x = sclass;
	auto z = cstr;
	auto w = i;
//	auto y = x;			//assign the value of x as well as the type to y
	decltype(x) y; 		//declare the type of y to be the same as the type of x

	cout << "type of i is " << typeid(i).name() << endl;
	cout << "type of cstr is " << typeid(cstr).name() << endl;
	cout << "type of sclass is " << typeid(sclass).name() << endl;
	cout << "type of x is " << typeid(x).name() << endl;
	cout << "type of y is " << typeid(y).name() << endl;
	cout << "type of z is " << typeid(z).name() << endl;
	cout << "type of w is " << typeid(w).name() << endl;

	for( auto it = sclass.begin(); it != sclass.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;


	for( auto c : sclass ) cout << c << " "; 		// new range-based for loop
	cout << endl;

	auto a = tf(sclass, cstr);		// possibly convoluted
	cout << "a is " << a << endl;
	cout << "type of a is " << typeid(a).name() << endl;


	return 0;
}



//type of i is i			//i integer
//type of cstr is PKc		//PKc pointer to a constant character pointer
//type of sclass is Ss		//Ss string class
//type of x is Ss
//type of y is Ss







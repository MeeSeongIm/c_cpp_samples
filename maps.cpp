// map: associative containers similar to a dictionary in python



#include <iostream>
#include <map>

using namespace std;

int main( int argc, char ** argv ) {
	cout << "map of strings from initializer list (C++11 feature): " << endl;
	map<string, string> strmap = { { "George", "Father" }, { "Ellen", "Mother" },
			{ "Ruth", "Daughter" }, { "Spike", "Neighbor's Son" } };
	map<string, string>::iterator it;	// will use throughout


	multimap<string, string> stringMap = { { "alpha", "one" }, { "beta", "two" },
			{ "gamma", "three" }, { "delta", "four" } };
	multimap<string, string>::iterator itt;


	cout << "size is " << strmap.size() << endl;
	cout << "check a couple of key/value pairs" << endl;
	cout << "George is " << strmap["George"] << endl;
	cout << "Ellen is " << strmap.find("Ellen")->second << endl;
	cout << endl;

	cout << "iterate the set" << endl;
	for( it = strmap.begin(); it != strmap.end() ; it++ ) {
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	cout << "insert an element" << endl;
	// strmap.insert( pair<string, string>("Luke", "Neighbor") );	// pre-C++11, insert element by element
	strmap.insert( { "Luke", "Neighbor" } );	// initializer list (C++11)
	cout << "inserted - size is " << strmap.size() << endl;
	for( it = strmap.begin(); it != strmap.end() ; it++ ) {
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	cout << "insert a duplicate" << endl;
	strmap.insert( { "Luke", "Neighbor" } );
	cout << "after insert size is " << strmap.size() << endl;
	for( it = strmap.begin(); it != strmap.end() ; it++ ) {
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	cout << "insert a duplicate" << endl;
	stringMap.insert( {"alpha", "one"} );
	cout << "after insert, size is " << stringMap.size() << endl;
	for( itt = stringMap.begin(); itt != stringMap.end() ; itt++ ) {
		cout << itt->first << " is " << itt->second << endl;
	}
	cout << endl;


	cout << "find and erase an element" << endl;
	it = strmap.find("Luke");
	if(it != strmap.end()) {
		cout << "found " << it->first << ":" << it->second << endl << endl;
		strmap.erase(it);
		cout << "erased - size is " << strmap.size() << endl << endl;
	} else {
		cout << "not found" << endl << endl;
	}

	for( it = strmap.begin(); it != strmap.end() ; it++ ) {  // range-based for loop
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	// only in C++11:
	for( auto p : stringMap ) {  // (pseudo-type, it creates a variable of the type that is expected in the context : container)
		cout << p.first << " is " << p.second << endl;
	}
	cout << endl;

	for( pair<string, string> p : stringMap ) {
		cout << p.first << " is " << p.second << endl;
	}
	cout << endl;


	return 0;
}




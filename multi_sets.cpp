// set class: associative container which contains only unique objects
// multi-set class: allows duplicates

#include <iostream>
#include <set>

using namespace std;

int main( int argc, char ** argv ) {
	cout << "set of strings from initializer list (C++11): " << endl;
	set<string> strset = { "one", "two", "three", "four", "five" };
	multiset<string> stringSet = { "one", "two", "three", "four", "five" };

	cout << "size: " << strset.size() << endl;
	for(string s : strset) {
		cout << s << " ";
	}
	cout << endl << endl;

	cout << "insert element \"six\"" << endl;
	strset.insert("six");
	for(string s : strset) {
		cout << s << " ";
	}
	cout << endl << endl;

	cout << "insert element \"six\"" << endl;
	stringSet.insert("six");
	for(string t : stringSet) {
		cout << t << " ";
	}
	cout << endl << endl;


	cout << "insert duplicate element \"five\"" << endl;
	pair<set<string>::iterator, bool> rvinsert; // return value insert, want to test if duplicate object has been inserted to the set
	bool & insertSuccess = rvinsert.second;
	rvinsert = strset.insert("five");
	if (insertSuccess) {
		for(string s : strset) {
			cout << s << " ";
		}
	} else cout << "insert failed";
	cout << endl << endl;

	cout << "insert duplicate element \"five\"" << endl;
	stringSet.insert("five");
	for(string t : stringSet) {
		cout << t << " ";
	}

	cout << endl << endl;

	cout << "find and erase element \"six\"" << endl;
	//	multiset<string>::iterator it = stringSet.find("six");
	set<string>::iterator it = strset.find("six");
	if(it != strset.end()) {
		cout << "in strset, found " << *it << endl;
		strset.erase(it);
	} else {
		cout << "in strset, not found" << endl;
	}
	for(string s : strset) {
		cout << s << " ";
	}
	cout << endl << endl;

	auto itt = stringSet.find("six");  		// use for C++11
	if(itt != stringSet.end()) {
		cout << "in stringSet, found " << *itt << endl;
		stringSet.erase(itt);
	} else {
		cout << "in stringSet, not found" << endl;
	}
	for(string t : stringSet) {
		cout << t << " ";
	}
	cout << endl << endl;


	return 0;
}



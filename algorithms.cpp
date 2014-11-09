// algorithms



#include <iostream>
#include <vector>
#include <locale>
#include <algorithm>
using namespace std;

// functor (a class that overloads the function operator; can be called a function but also has properties of a class) for count_if
class strhas {
	char needle;
	strhas(){}
public:
	strhas(char c) : needle(c) {}
	bool operator () ( string & );
};
bool strhas::operator() ( string & haystack ) {
	return haystack.find_first_of(needle) != haystack.npos; // npos: static member constant with the greatest poss value
}

string uppercase(string & s) {
	string out;
	for( char c : s) out += toupper(c);
	return out;
};

int main( int argc, char ** argv ) {
	vector<string> vs { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
	vector<int> vi { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<string>::iterator vsit;   // vector string iterator
	vector<int>::iterator viit;		 // vector integer iterator
	string s1 = "big light in the sky slated to appear in east";

	// count
	cout << "push two extra sevens onto vs" << endl;
	vs.push_back("seven");			// push to the back of vs
	vs.push_back("seven");
	cout << "count vs \"seven\": " << count(vs.begin(), vs.end(), "seven") << endl;
	cout << "pop those extra sevens" << endl;
	vs.pop_back();
	vs.pop_back();

	// find
	cout << "find 7 in vi: ";
	viit = find(vi.begin(), vi.end(), 7);
	if(viit != vi.end()) {
		cout << "found: " << *viit << endl;
	} else {
		cout << "not found" << endl;
	}

	// equal, checks source range and destination range
	// 	The first argument is the beginning iterator of the first range
	//  the second argument is the ending iterator of the first range
	//  the third argument is the beginning of the second range
	string p = "radar";
	if(equal(p.begin(), p.begin() + ( p.size() / 2 ), p.rbegin())) {  // compare the first half of the string with the second half reversed. rbegin == the beginning of the string backwards
		cout << p << " is";
	} else {
		cout << p << " is not";
	}
	cout << " a palindrome" << endl;

	string q = "lisabonetatenobasil";
	if(equal(q.begin(), q.begin() + ( q.size() / 2 ), q.rbegin())) {  // compare the first half of the string with the second half reversed. rbegin == the beginning of the string backwards
		cout << q << " is";
	} else {
		cout << q << " is not";
	}
	cout << " a palindrome" << endl;

	// search
	string match = "slated";
	cout << "string is \"" << s1 << "\", search term is \"" << match << "\"" << endl;
	cout << "search: ";
	string::iterator search_it = search(s1.begin(), s1.end(), match.begin(), match.end());
	if(search_it != s1.end()) {
		cout << "search term found at position " << size_t( search_it - s1.begin() ) << endl;
	} else {
		cout << "search term not found" << endl;
	}

	// show vs before count_if
	// count_if: counts the number of times a particular condition is true within a container
	cout << "vs is: ";
	for( string s : vs ) cout << s << " ";
	cout << endl;

	// count_if
	cout << "count_if vs has 's' (functor version): ";
	cout << count_if(vs.begin(), vs.end(), strhas('s') ) << endl; // strhas('s'): takes a class and constructs a temp object with this class

	// C++11 count_if with lambda expression
	cout << "count_if vs has 's' (lambda version): ";
	cout << count_if(vs.begin(), vs.end(),
			[](string & s) { return s.find_first_of('s') != s.npos; } // functor not needed, this is an inline function
		) << endl;

	// for_each
	cout << "for_each uppercase: ";
	for_each(vs.begin(), vs.end(), [](string & s){ cout << uppercase(s) << " "; }); // our lambda function prints out our string in upper case
	cout << endl;

	// transform
	cout << "transform: " << endl;
	vector<int> vi2;
	cout << "vi before transformation: ";
	for( int i : vi ) cout << i << " ";
	cout << endl;
	vi2.resize(vi.size());	// make space for transformation, resize vi2 to have the same size as vi
	transform(vi.begin(), vi.end(), vi2.begin(), [](int i){ return ++i; }); // increment the numbers and store them into our destination

	cout << "vi2 after transformation: ";
	for( int i : vi2 ) cout << i << " ";
	cout << endl;

	// the beginning of the first range, the end of the first range, the beginning of the sec range, the end of the sec range, add them and store them into vi2
	transform(vi.begin(), vi.end(), vi2.begin(), vi2.begin(), [](int i, int j){ return i + j; });
	cout << "vi2 after second transformation: ";
	for( int i : vi2 ) cout << i << " ";
	cout << endl;

	cout << "vi after all transformations: ";
	for( int i : vi ) cout << i << " ";
	cout << endl;

	cout << "string before initial cap transformation: " << s1 << endl;
	char last = 0;
	transform(s1.begin(), s1.end(), s1.begin(), [&last](char c) {  // &last: capture
		if(last == ' ' || last == 0) { last = c; return toupper(c); }
		else { last = c; return tolower(c); }
	});
	cout << "string after initial cap transformation: " << s1 << endl; // each word in the string has a capital letter

	return 0;
}




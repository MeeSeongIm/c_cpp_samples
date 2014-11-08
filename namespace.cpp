// namespace
#include <iostream>

namespace BWString {
const std::string bws = "This is BWString::string";
class string {
	std::string s;
public:
	string ( void ) : s(bws) {};					// constructor
	string ( const std::string & _s ) : s(bws) {};			// constructor
	operator std::string & ( void ) { return s; };
};
};	// namespace BWString


namespace ThisString {
const std::string thisString = "This is a string inside a namespace.";
class string {
	std::string t;
public:
	string ( void ) : t(thisString) {};				// constructor
	string ( const std::string & _t ) : t(thisString) {};		// constructor
	operator std::string & ( void ) { return t; };
};
};	// namespace ThisString



//using namespace std;
//using BWString::string;
using namespace ThisString;
string s3("This is a string.");


BWString::string s1("testing, testing.");
std::string s2("This is a sentence.");

int main( int argc, char ** argv ) {
	std::string s = s1;
	std::string t = s3;
	std::cout << s << std::endl;
	std::cout << t << std::endl;
	return 0;
}




// implicit and explicit constructors


#include <iostream>

const std::size_t maxlen = 1024;	// maximum length of bwString

class TestingSize {
	std::size_t _size;
public:
	explicit TestingSize(const unsigned int);	// constructor: size from int
	explicit TestingSize(const char *);	// constructor: size from c-string
	std::size_t size() const;
};

TestingSize::TestingSize(const unsigned int n) {
	std::cout << "TestingSize from int" << std::endl;
	_size = (n <= maxlen) ? n : 0;
}

TestingSize::TestingSize(const char * s) {
	std::cout << "constructor: TestingSize from c-string" << std::endl;
	for(std::size_t i = 0; i < maxlen; i++) {
		if(s[i] == '\0') {
			_size = i;
			return;
		}
	}
	_size = 0;
}

std::size_t TestingSize::size() const {
	return _size;
}

using namespace std;

void func(const TestingSize & s) {
	cout << "s.size() is " << s.size() << endl;
}

int main( int argc, char ** argv ) {
	TestingSize s(125);
	cout << "s.size() is " << s.size() << endl;
	func(TestingSize("xxxxx"));  //  ' ' character,  " " string. pass func to string.
	return 0;
}


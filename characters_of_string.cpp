
#include <iostream>
#include <string>
using namespace std;

int main( int argc, char ** argv ) {
	cout << "The square of the first 10 positive integers is" << endl;
	for (int i=1; i<=10; i++) {
	cout << i*i << endl;
	}
	std::string str("This is a string.");
	for (unsigned i=0; i< str.length(); i++)
	{
		std::cout << str.at(i);
	}
	std::cout<< "The length of str is " << str.length() << " bytes.\n";
	return 0;
}




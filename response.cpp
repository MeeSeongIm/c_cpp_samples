#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	string response;
	cout << "First Name: " << flush;
	getline(cin, response);
	//	cin >> response;
	cout << "First name is " << response << endl;
	string another_input;
	cout << "Last Name: " << flush;
	getline(cin, another_input);
	cout << "Last Name is " << another_input << flush << "\n";
	return 0;
}



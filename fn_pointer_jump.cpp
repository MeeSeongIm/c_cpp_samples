// function pointer
// jump


#include <iostream>
#include <vector>
using namespace std;

// rather than using a jump table in an array, we'll use an STL vector in C++.
void a() { puts("this is a()"); }
void b() { puts("this is b()"); }
void c() { puts("this is c()"); }
void d() { puts("this is d()"); }
void e() { puts("this is e()"); }

int jump( const string & );
int prompt();

// type is a pointer to a void function
vector<void (*)()> funcs = { a, b, c, d, e };

int main( int argc, char ** argv ) {
	while(prompt());
	puts("\nDone.");
	return 0;
}

int prompt() {
	cout << "Choose an option: " << endl
	<< endl
	<< "1. Function a()" << endl
	<< "2. Function b()" << endl
	<< "3. Function c()" << endl
	<< "4. Function d()" << endl
	<< "5. Function e()" << endl
	<< "Q. Quit." << endl
	<< ">> ";

	string response;
	cin >> response;

	return jump(response);
}

int jump( const string & s ) {
	char code = s[0];
	if(code == 'q' || code == 'Q') return false;

	int i = (int) code - '0';
	i--;		// list is zero-based
	if( ( i < 0 ) || ( i > 8 ) ) {
		cout << "That is an invalid choice." << endl;
		return true;
	}

	if(i < funcs.size()) {
		funcs[i]();
		return true;
	} else {
		cout << "This is an invalid choice." << endl;
		return true;
	}
}




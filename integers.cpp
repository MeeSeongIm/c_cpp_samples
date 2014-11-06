

#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
	cout << "Finite sequence of integers \n";
	for (int i =0; argv[i]; i++) {
		cout << i << ":" << argv[i] << endl;
	}
	cout << "\n";
	for (int i =3; argv[i]; i--){
		cout << i << ":" << argv[i] << endl;
	}
	return 0;
}





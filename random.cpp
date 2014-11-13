#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void cast() {
	for (int i =0; i < 10;i++) {
		int num = (rand()%100);  // get a random number from 0 to 99
		cout << num << endl;
	}
	for (int i =0; i < 10; i++) {
		int numer = (rand()%100) + 1; // get a random number from 1 to 100
		cout << numer << endl;
	}
}


int main() {
	srand(time(NULL));
	cast();
	return 0;
}




// function call operator.



#include <iostream>
using namespace std;

int f( int i) {
	cout << "this is f()" << endl;
	return i;
}

int g( int j) {
	cout << "this is g()" << endl;
	return j;
}

int main( int argc, char ** argv ) {
	int i;
	int (*pFunc) (int);  				// pointer to the function type
	pFunc = &f;
	i = (*pFunc)(47);					//call the function through the pointer
	printf("i is %d\n", i);

	int j;
	int (*pFunct) (int) = &g;  			// move the initialization to the line declaring*pFunct
	j = (*pFunct)(47);					//call the function through the pointer
	printf("j is %d\n", j);


	return 0;
}






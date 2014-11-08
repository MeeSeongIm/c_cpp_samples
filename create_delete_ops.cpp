// creating and destroying objects with new and delete operators


#include <iostream>
using namespace std;

class A {
    int _a;
    int _b;
    int _c;
public:
    A( int i = 0 );
    ~A();
    int a() { return _a; }
    int b() { return _b; }
    int c() { return _c; }
};

A::A( int i ) : _a(i), _b(i + 1), _c(i + 2) {
    cout << "A constructor called" << endl;
}

A::~A() {
    cout << "A destructor called" << endl;
}

int main( int argc, char ** argv ) {
    cout << "allocating space for one A object" << endl;
    A * a = new (nothrow) A[5]; 			// allocate space for an array
//    A * a = new (nothrow) A(5);
//    A * a = new (nothrow) A;
    if(a == nullptr) {
    //    if(a == (void*)0) {
        cerr << "new A failed." << endl;
        return 1;
    }
    for(int i =0; i < 5; ++i) {
    	printf("a: %d, %d, %d\n", a[i].a(), a[i].b(), a[i].c()); // deference with a pointer op
    }
//    printf("a: %d, %d, %d\n", a->a(), a->b(), a->c());
    delete[] a;  							// array form of delete. Important, or else, this program will leak memory.
//    delete a;
    cout << "space for A object deleted" << endl;
    
    return 0;
}




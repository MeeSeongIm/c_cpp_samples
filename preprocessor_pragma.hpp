// preprocessor
// conditional processing


#ifndef _FOO    					//include guard
#define _FOO 1
#define CONSTANT 1    				// CONSTANT is replaced with 1
#define MAX(a,b) (a > b ? a: b)

class foo {
	public:
		int this;
		char * that;
};



// implementation-specific behavior
#pragma long_calls
#pragma mark Label
#pragma align 32 name



#endif // _FOO

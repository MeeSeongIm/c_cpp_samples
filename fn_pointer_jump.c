// function pointer
// jump function
// console-based, user input
// interactive


#include <stdio.h>

void a() { puts("this is a()"); }
void b() { puts("this is b()"); }
void c() { puts("this is c()"); }
void d() { puts("this is d()"); }
void e() { puts("this is e()"); }

int jump( char * );
int prompt();

void (*funcs[])() = { a, b, c, d, e, NULL }; // 5 pointers and NULL pointer

int main( int argc, char ** argv ) {
	while(prompt());
	puts("\nDone.");
	return 0;
}

int prompt() {
	puts("Choose an option: ");				// output
	puts("");;								// empty line
	puts("1. Function a()");				// output
	puts("2. Function b()");
	puts("3. Function c()");
	puts("4. Function d()");
	puts("5. Function e()");
	puts("Q. Quit.");
	printf(">> ");


	fflush(stdout);					// flush after prompt
	enum { bufsz = 16 };			// constant for buffer size
	static char response[bufsz];	// static storage for response buffer
	fgets(response, bufsz, stdin);	// get response from console

	return jump(response);
}

int jump( char * s ) {
	char code = s[0];
	if(code == 'q' || code == 'Q') return 0;

	// get the length of the funcs array
	int func_length;
	for(func_length = 0; funcs[func_length] != NULL; func_length++);

	int i = (int) code - '0';
	i--;							// list is zero-based
	if( ( i < 0 ) || ( i > 8 ) ) {
		puts("That is an invalid choice.");
		return 1;
	}

	if(i < func_length) {
		funcs[i]();
		return 1;
	} else {
		puts("This is an invalid choice.");
		return 1;
	}
}


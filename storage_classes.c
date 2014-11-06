// identifier scope: refers to which an identifier or a variable is available/visible.
// storage classes: refers to how and where the storage is allocated for the identifier.
// auto storage is the default storage class of a variable defined inside of a block
// 		(it's stored in a temp space).
// static storage is permanent and can be reused. Each time it is used, it is using the same storage space.
// register storage tells the compiler to try to store this variable in a register of the processor,
// 		not in a temp space. The result: faster compiler.
// external storage: functions, variables, etc. are defined in a different file in a different translation unit
// 		but we're going to declare them here since we will be using them.
// 		Example: extern void func() is in different storage file and the files are linked together.

#include <stdio.h>

extern int var;
extern void func();   // call func from external file

int number = 7;

int main( int argc, char ** argv ) {
	func();
	printf("The extern var is %d.\n", var);
	for (int i = 1; i <=5; ++i) {
		int twenty_five = 25;
		printf("Iterated numbers are %d\n", twenty_five++);  // auto storage
	}
	for (int i = 1; i <=5; i++) {
		static int seventy = 70;
		printf("Static int is %d\n", seventy++);  //static number incremented
	}
	for (int i = 1; i<=5; i++) {
		register int nine = 9;
		printf("Register int example is %d\n", nine++);
	}
	int even_number = 12;
	printf("The first number is %d. \n", number);
	printf("The second number is %d. \n", even_number);

	if (1) {
		printf("The fourth prime number is %d.\n", number);
	}
	return 0;
}




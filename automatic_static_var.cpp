// automatic and static variables



#include <iostream>
using namespace std;

void func();
void fun();

int main( int argc, char ** argv ) {
	func();
	func();
	func();
	func();
	func();
	printf("\n");
	fun();
	fun();
	fun();
	fun();
	fun();

	return 0;
}

void func() {
	int i = 5; // 5 is in temporary storage
	printf("this is func() i is %d\n", i++);
}

void fun() {
	static int i = 5; // the value is stored in one invocation to another
	printf("this is func() i is %d\n", i++);
}



/*this is func() i is 5
this is func() i is 5
this is func() i is 5
this is func() i is 5
this is func() i is 5

this is func() i is 5
this is func() i is 6
this is func() i is 7
this is func() i is 8
this is func() i is 9*/





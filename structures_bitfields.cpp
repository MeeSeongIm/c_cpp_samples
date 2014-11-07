// understanding bitfields


#include <iostream>
using namespace std;

// structure called preferences: 6 members, 5 Booleans, and unsigned int.
//the number after : represents the number of bits that the field will occupy.
struct preferences {
	bool likesMusic : 1;
	bool hasHair : 1;
	bool hasInternet : 1;
	bool hasDinosaur : 1;
	bool hasToys : 1;
	unsigned int numberOfChildren: 4;
};

int main( int argc, char ** argv ) {
	struct preferences jacob;
	jacob.likesMusic = true;
	jacob.hasHair = false;
	jacob.hasInternet = true;
	jacob.hasDinosaur = false;
	jacob.hasToys = false;
	jacob.numberOfChildren = 3;

	if(jacob.likesMusic) printf("jacob likes music\n");
	if(jacob.hasHair) printf("jacob has hair\n");
	if(jacob.hasInternet) printf("jacob has net\n");
	if(jacob.hasDinosaur) printf("jacob has a dino\n");
	if(jacob.hasToys) printf("home has toys\n");
	printf("jacob has %d children\n", jacob.numberOfChildren);
	return 0;
}




// getting info about the file.
// struct stat is the normalized standardized structure that has info about files.
// On most OS, has many fields and a small subset of them are more or less standardized.



#include <stdio.h>
#include <time.h>
#include <sys/stat.h>

int main( int argc, char ** argv ) {
	const char * fname = "stat.c";
	struct stat fstat;

	if( stat(fname, &fstat) == 0 ) {
		fprintf(stdout, "Name: %s, UID: %u, GID: %u, Size: %llu\n",
				fname, fstat.st_uid, fstat.st_gid, fstat.st_size);

		// file modification time is in seconds since midnight 1970-01-01 UTC
		const static int bufSize = 128;
		char buf[bufSize];
		// struct tm mtime = *gmtime(&fstat.st_mtimespec.tv_sec);
		struct tm mtime = *gmtime(&fstat.st_mtime);
		strftime( buf, bufSize, "%Y-%m-%d %H:%M:%S %Z", &mtime ); // format the last modified time
		printf("Last modified: %s\n", buf);

	} else {
		perror("Couldn't stat file");
	}
	return 0;
}



/*minimum fields of struct stat
st_size 	size of file in bytes
st_ino 		file inode number
st_mode 	file mode
st_nlink 	number of hard links
st_uid 		owner user ID
st_gid 		owner group ID
st_ctime 	file creation time
st_mtime 	file modification time
st_atime 	file access time

int stat(char * filename, struct stat * info);

returns an int: 0 for success and ~0 for not success.
	takes a pointer to a file name and a pointer to a struct stat.
	puts the results in that struct stat through that pointer.*/






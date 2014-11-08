// defining a variable number of arguments
// functions taking a varying number of arguments



#include <stdio.h>
#include <stdarg.h>

double average(const int count, ...)  // variable argument list
{
	va_list ap;  // va_list (a typedef) is a macro used to implement the variable argument list.
	int i;
	double total = 0.0;

	va_start(ap, count);
	for(i = 0; i < count; i++) {
		total += va_arg(ap, double);
	}
	va_end(ap);
	return total / count;
}

int message(const char * fmt, ...) {
	va_list ap;
	va_start(ap, fmt);					// fmt = format
	int rc = vfprintf(stdout, fmt, ap);
	fputs("\n", stdout);
	va_end(ap);
	return rc;
}

int main( int argc, char ** argv ) {
	message("This is a message.");
	message("average: %lf", average(6, 10.0, 25.0, 35.7, 50.1, 127.6, 75.0)); // first number is the count of arguments, and the next 6 arguments: floating point numbers which gets passed to the variadic function
	// above line prints the average of the 6 floating point numbers.
	return 0;
}




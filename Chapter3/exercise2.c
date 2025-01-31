/*
	Write calls of printf that display a float variable x in the following formats.

	(a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.

	(b) Exponential notation; right-justified in a field of size 10; six digits after the decimal
	point.

	(c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal
	point.

	(d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal
	point.
*/

/* ANSWER */


#include <stdio.h>


int main() {
	float f;

	printf("%-8.1e", f);
	printf("%10.6f", f);
	printf("%-8.3f", f);
	printf("%6f", f);

	return 0;
}

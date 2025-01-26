/*
	Write a program that computes the volume of a sphere with a 10-meter radius, using the for-
	mula v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap-
	pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself
	twice to compute r3.	
*/


/* ANSWER */

#include <stdio.h>

int main() {

	double radius;
	double volume;

	radius = 10;

	volume = (4.0f / 3.0f) * 3.14159265 * radius * radius * radius;	// If you set the fraction to 4/3, The result will be truncated and it will be equal to 1.

	printf("Volume:		%g\n", volume);
	return 0;
}

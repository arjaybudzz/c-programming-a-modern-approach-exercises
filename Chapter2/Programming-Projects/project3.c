/*
	Modify the program of Programming Project 2 so that it prompts the user to enter the radius
	of the sphere.

	I copied my program in project no. 2
*/


/* ANSWER */

#include <stdio.h>

int main() {

	double radius;
	double volume;

	radius = 0;	
	volume = 0;

	printf("Enter radius:	");
	scanf("%lg", &radius);

	if (radius < 0) {
		fprintf(stderr, "Radius value must be greater than or equal to 0.\n");
		return -1;
	}

	volume = (4.0f / 3.0f) * 3.14159265 * radius * radius * radius;	// If you set the fraction to 4/3, The result will be truncated and it will be equal to 1.

	printf("Volume:		%lg\n", volume);
	return 0;
}

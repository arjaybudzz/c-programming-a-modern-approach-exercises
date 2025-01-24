/*
	3. Condense the dweight.c program by (1) replacing the assignments to height,
	length, and width with initializers and (2) removing the weight variable, instead cal-
	culating (volume + 165) / 166 within the last printf.

	dweight.c program

	Computes the dimensional weight of a
	box from input provided by the user

	#include <stdio.h>

	int main(void)
	{
		int height, length, width, volume, weight;

		printf("Enter height of box: ");
		scanf("%d", &height);

		printf("Enter length of box: ");
		scanf("%d", &length);

		printf("Enter width of box: ");
		scanf("%d", &width);

		volume = height * length * width;
		weight = (volume + 165) / 166;

		printf("Volume (cubic inches): %d\n", volume);
		printf("Dimensional weight (pounds): %d\n", weight);

		return 0;
	}
*/

#include <stdio.h>

int main() {

	int height;
	int length;
	int width;
	int volume;
	
	/* Set random values */

	height = 20;
	length = 100;
	width = 40;

	volume = height * length * width;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0; 	
}

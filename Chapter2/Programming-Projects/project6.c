/*
	Modify the program of Programming Project 5 so that the polynomial is evaluated using the
	following formula:

	((((3x + 2)x – 5)x – 1)x + 7)x – 6

	Note that the modified program performs fewer multiplications. This technique for evaluat-
	ing polynomials is known as Horner’s Rule.
*/

/* ANSWER */

#include <stdio.h>

double powr(double, int);

int main() {

	double val;
	double result;

	val = 0;
	result = 0;

	printf("Enter value:	");
	scanf("%lg", &val);

	result = ((((3 * val) * val - 5) * val - 1) * val + 7) * val - 6; 
	printf("Result:		%lg\n", result);

	return 0;
}

double powr(double base, int exp) {
	double prod;

	prod = 1;

	if (exp == 0) return prod;
	
	while (exp > 0) {
		prod *= base;
		--exp;
	}

	return prod;
} 

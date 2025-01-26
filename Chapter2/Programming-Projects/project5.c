/*
	Write a program that asks the user to enter a value for x and then displays the value of the
	following polynomial:

	3x5 + 2x4 – 5x3 – x2 + 7x – 6

	Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself
	repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)

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

	result = (3 * powr(val, 5)) + (2 * powr(val, 4)) - (5 * powr(val, 3)) - powr(val, 2) + (7 * val) - 6;
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

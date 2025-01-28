/*

	Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
	that amount using the smallest number of $22, $10, $5, and $1 bills:

	Enter a dollar amount: 93

	$20 bills: 4
	$10 bills: 1
	$5 bills: 0
	$1 bills: 3

	Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
	the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
	integer values throughout, not floating-point numbers.

*/

/* ANSWER */

#include <stdio.h>


int main() {
	
	int twenty;
	int ten;
	int five;
	int one;
	int amount;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	twenty = amount / 20;
	ten = (amount - twenty * 20) / 10;
	five = (amount - twenty * 20 - ten * 10) / 5;
	one = amount - twenty * 20 - ten * 10 - five * 5;

	printf("$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf("$5 bills: %d\n", five);
	printf("$1 bills: %d\n", one);	

	return 0;
}

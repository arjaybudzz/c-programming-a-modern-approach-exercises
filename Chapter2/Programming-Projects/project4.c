
/*
	Write a program that asks the user to enter a dollars-and-cents amount, then displays the
	amount with 5% tax added:

	Enter an amount: 100.00 (input)
	With tax added: $105.00
*/

/* ANSWER */

#include <stdio.h>


int main() {

	double amount;
	double added;

	amount = 0;

	printf("Enter an amount: ");
	scanf("%lg", &amount);

	added = amount * 0.05;

	printf("With tax added:	$%lg\n", amount + added);
	return 0;
}
	

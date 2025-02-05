/*
	Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
	xxxx and then displays the number in the form xxx.xxx.xxx:

	Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
	You entered 404.817.6900
*/

/* ANSWER */

#include <stdio.h>


int main() {
	int num1;
	int num2;
	int num3;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%3d) %3d-%4d", &num1, &num2, &num3);

	printf("You entered %3d.%3d.%3d\n", num1, num2, num3);
	return 0;
}

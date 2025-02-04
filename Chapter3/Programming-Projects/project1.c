/*
	Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis-
	plays it in the form yyyymmdd:

	Enter a date (mm/dd/yyyy): 2/17/2011
	You entered the date 20110217
*/

/* ANSWER */

#include <stdio.h>

int main() {
	int month;
	int day;
	int year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &month, &day, &year);

	printf("You entered the date %4d%02d%02d\n", year, month, day);
	return 0;
}

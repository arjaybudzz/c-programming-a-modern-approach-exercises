/*
	Write a program that formats product information entered by the user. A session with the
	program should look like this:

	Enter item number: 583
	Enter unit price: 13.5
	Enter purchase date (mm/dd/yyyy): 10/24/2010


	Item		Unit		Purchase
			Price		Date

	583		$ 13.50		10/24/2010

	The item number and date should be left justified; the unit price should be right justified.
	Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.

*/

/* ANSWER */

#include <stdio.h>

int main() {
	int item;
	double u_price;
	int month;
	int day;
	int year;

	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%lf", &u_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &month, &day, &year);

	if (item < 0) {
		fprintf(stderr, "Invalid item number.\n");
		return -1;
	}

	if (u_price < 0 || u_price > 9999.99) {
		fprintf(stderr, "Unit price must not be less than zero or not greater than 9999.99\n");
		return -2;
	}

	if (month < 1 || month > 12) {
		fprintf(stderr, "Invalid month.\n");
		return -3;
	}

	if (day < 1 || day > 31) {
		fprintf(stderr, "Invalid day.\n");
		return -4;
	}

	if (year < 1900 || year > 2099) {
		fprintf(stderr, "Invalid year.\n");
		return -5;
	}

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n\n");

	printf("%-4d\t\t$%6.2f\t\t%02d/%02d/%4d\n", item, u_price, month, day, year);
	return 0;
}

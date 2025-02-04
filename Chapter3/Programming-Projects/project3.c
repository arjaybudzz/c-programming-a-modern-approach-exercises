/*

	Books are identified by an International Standard Book Number (ISBN). ISBNs assigned
	after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
	(Older ISBNs use 10 digits.) The first group (the GS1 prefix) is currently either 978 or 979.

	The group identifier specifies the language or country of origin (for example, 0 and 1 are
	used in English-speaking countries). The publisher code identifies the publisher (393 is the
	code for W. W. Norton). The item number is assigned by the publisher to identify a specific
	book (97950 is the code for this book). An ISBN ends with a check digit that’s used to verify
	the accuracy of the preceding digits. Write a program that breaks down an ISBN entered by
	the user:

	Enter ISBN: 978-0-393-97950-3
	GS1 prefix: 978
	Group identifier: 0
	Publisher code: 393
	Item number: 97950
	Check digit: 3

	Note: The number of digits in each group may vary; you can’t assume that groups have the
	lengths shown in this example. Test your program with actual ISBN values (usually found
	on the back cover of a book and on the copyright page).
*/

/* ANSWER */

#include <stdio.h>

int main() {
	int gsi;
	int g_id;
	int p_code;
	int item_no;
	int ch_digit;

	printf("Enter ISBN: ");
	scanf("%3d - %d - %3d - %d - %d", &gsi, &g_id, &p_code, &item_no, &ch_digit);

	printf("GSI prefix: %3d\n", gsi);
	printf("Group identifier: %d\n", g_id);
	printf("Publisher code: %3d\n", p_code);
	printf("Item number: %d\n", item_no);
	printf("Check digit: %d\n", ch_digit);

	return 0;
}

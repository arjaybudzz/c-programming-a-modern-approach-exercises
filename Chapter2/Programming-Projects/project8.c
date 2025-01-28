/*
	Write a program that calculates the remaining balance on a loan after the first, second, and
	third monthly payments:

	Enter amount of loan: 20000.00
	Enter interest rate: 6.0
	Enter monthly payment: 386.66

	Balance remaining after first payment: $19713.34
	Balance remaining after second payment: $19425.25
	Balance remaining after third payment: $19135.71

	Display each balance with two digits after the decimal point. Hint: Each month, the balance
	is decreased by the amount of the payment, but increased by the balance times the monthly
	interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
	a percentage and divide it by 12.
*/

#include <stdio.h>


int main() {
	
	double loan_amount;
	double i_rate;
	double monthly_payment;
	double bfirst_payment;
	double bsecond_payment;
	double bthird_payment;
	
	loan_amount = 0;
	i_rate = 0;
	monthly_payment = 0;
	bfirst_payment = 0;
	bsecond_payment = 0;
	bthird_payment = 0;

	printf("Enter amount of loan: ");
	scanf("%lg", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%lg", &i_rate);
	printf("Enter monthly payment: ");
	scanf("%lg", &monthly_payment);

	i_rate /= 100;
	i_rate /= 12;

	bfirst_payment = loan_amount - monthly_payment + loan_amount * i_rate;	
	bsecond_payment = bfirst_payment - monthly_payment + i_rate * bfirst_payment;
	bthird_payment = bsecond_payment - monthly_payment + i_rate * bsecond_payment;

	printf("Balance after first payment: %.2f\n", bfirst_payment);
	printf("Balance after second payment: %.2f\n", bsecond_payment);
	printf("Balance after third payment: %.2f\n", bthird_payment);

	return 0;
}

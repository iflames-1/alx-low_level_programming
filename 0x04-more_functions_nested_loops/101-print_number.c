#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor = 1;
	int num_digits = 0;
	int i;
	int num;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Count the number of digits in the integer */
	num = n;
	while (num != 0)
	{
		num /= 10;
		num_digits++;
	}

	/* Calculate the divisor based on the number of digits */
	for (i = 1; i < num_digits; i++)
	{
		divisor *= 10;
	}

	/* Print each digit one by one */
	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}

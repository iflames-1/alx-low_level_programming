#include "main.h"

/**
 * print_positive_number - Helper function to print a positive integer
 * @n: The positive integer to print
 */
void print_positive_number(unsigned int n)
{
	if (n / 10 != 0)
		print_positive_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_positive_number(-n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_positive_number(n);
	}
}

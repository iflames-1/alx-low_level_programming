#include <stdio.h>

/**
 * print_big_number - Print a big number using two unsigned long ints.
 * @a: First part of the number.
 * @b: Second part of the number.
 * @first: Flag to check if it's the first number to print.
 */
void print_big_number(unsigned long int a, unsigned long int b, int first)
{
	if (!first)
		printf(", ");
	if (b == 0)
		printf("%lu", a);
	else
		printf("%lu%018lu", a, b);
}

/**
 * main - Entry point, prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a1, a2, b1, b2, c1, c2;
	int i;

	a1 = 0;
	a2 = 1;
	b1 = 0;
	b2 = 2;

	printf("%lu, %lu", a2, b2);

	for (i = 2; i < 98; i++)
	{
		if (b2 > 999999999999999999 - a2)
		{
			c1 = a1 + b1 + 1;
			c2 = (a2 + b2) - 1000000000000000000;
		}
		else
		{
			c1 = a1 + b1;
			c2 = a2 + b2;
		}

		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;

		print_big_number(b1, b2, 0);
	}

	printf("\n");
	return (0);
}

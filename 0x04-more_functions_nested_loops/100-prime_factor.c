#include <stdio.h>
#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Alway 0
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	/* Handle 2 as a factor separately */
	while (n % 2 == 0)
	{
		n = n / 2;
	}

	/* Now check for odd factors starting from 3 */
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	/* If n is still greater than 2, it is a prime factor */
	if (n > 2)
	{
		printf("%lu\n", n);
	}

	return (0);
}

#include <stdio.h>

/**
 * main - Calculates the sum of even-valued terms in the Fibonacci sequence
 *        up to 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0, even_sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			even_sum += fib1;

		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}

	printf("%lu\n", even_sum);

	return (0);
}

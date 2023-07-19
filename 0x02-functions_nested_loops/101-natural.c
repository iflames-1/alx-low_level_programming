#include <stdio.h>

/**
 * main - This program prints the total of all the multiples
 * of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum3 = 0, sum5 = 0, sum15 = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		if (i % 5 == 0)
		{
			sum5 += i;
		}
		if (i % 15 == 0)
		{
			sum15 += i;
		}
	}
	printf("%d\n", sum3 + sum5 - sum15);
	return (0);
}

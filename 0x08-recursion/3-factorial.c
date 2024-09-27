#include "main.h"

/**
 *factorial - finds the factorial of any number
 *@n: number that'ld be given
 *Return: Factorial of a number
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n == 1)
		{
			return (1);
		}
		return (-1);
	}
	return (n * factorial(n - 1));
}

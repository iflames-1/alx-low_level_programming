#include "main.h"

/**
 * factorial - Calculates the factorial of a given number using recursion.
 * @n: The input number for which to calculate the factorial.
 *
 * Return: The factorial of the number, or -1 if n is lower than 0 (error).
 */
int factorial(int n)
{
	if (n < 0) /* Check for the error case (n is lower than 0).*/
	{
		return (-1);
	}

	if (n == 0) /* Base case: factorial of 0 is 1.*/
	{
		return (1);
	}

	return (n * factorial(n - 1)); /* Recursive call to calculate factorial.*/
}

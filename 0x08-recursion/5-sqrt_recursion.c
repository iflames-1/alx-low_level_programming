#include "main.h"

/**
 * _sqrt_recursion_helper - A helper function to calculate the square root.
 * @n: The number for which to calculate the square root.
 * @i: The current value to check if it is the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n) /* Check if i is the square root. */
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The input number for which to calculate the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Check for the error case (negative number). */
	{
		return (-1);
	}

	return (_sqrt_recursion_helper(n, 0));
}

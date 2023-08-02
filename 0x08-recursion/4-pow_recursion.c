#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y using recursion.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x raised to the power of y.
 *         If y is lower than 0, the function returns -1 (error).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Check for the error case (y is lower than 0).*/
	{
		return (-1);
	}

	if (y == 0) /* Base case: any number raised to the power of 0 is 1.*/
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

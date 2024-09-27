#include "main.h"

/**
 *_pow_recursion - calculates the power of x raised to the power of y
 *@x: base number
 *@y: power
 *Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y <= 1)
	{
		if (y == 1)
		{
			return (x);
		}
		else if (y == 0)
		{
			return (1);
		}
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

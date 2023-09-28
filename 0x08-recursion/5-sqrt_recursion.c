#include "main.h"

/**
 *_sqrt_check - test for each number from 1 to see if its the sprt of n
 *@n: number
 *@i: iterator
 *Return: perfect square
 */
int _sqrt_check(int n, int i)
{
	if (i * i >= n)
	{
		if (i * i == n)
		{
		return (i);
		}
		return (-1);
	}
	return (_sqrt_check(n, i + 1));
}

/**
 *_sqrt_recursion - calculates the natural square root of a number
 *@n: number
 *Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (_sqrt_check(n, 0));
}

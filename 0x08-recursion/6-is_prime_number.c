#include "main.h"

/**
 *prime_checker - checks if n is a prime number
 *@n: number we are checking
 *@i: iterator we are testing with
 *Return: 1 if its a prime number and 0 if otherwise
 */
int prime_checker(int n, int i)
{
	if (i > n)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_checker(n, i + 1));
}

/**
 *is_prime_number - checks if a number is a prime number
 *@n: number to be checked
 *Return: 1 if its a prime number and returns 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_checker(n, 2));
}

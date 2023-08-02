#include "main.h"

/**
 * is_prime_helper - A helper function to check if the number is prime.
 * @n: The number to check if it is prime.
 * @i: The current value to check as a potential divisor.
 *
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2) /* Base case: 0, 1, and 2 are not prime. */
	{
		return ((n == 2) ? 1 : 0);
	}

	if (n % i == 0) /* Check if n is divisible by i (i is a factor). */
	{
		return (0); /* n is not prime if it has a factor other than 1 and itself. */
	}

	if (i * i > n) /* If i*i is greater than n, then n is prime. */
	{
		return (1);
	}

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The input number to check.
 *
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Check for the error case (non-positive numbers). */
	{
		return (0);
	}

	return (is_prime_helper(n, 2));
}

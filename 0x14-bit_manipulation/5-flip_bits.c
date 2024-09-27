#include "main.h"

/**
 *flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 *@n: first number
 *@m: second num
 *Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/* Check the least significant bit */
		count += xor_result & 1;
		/* Right-shift to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}

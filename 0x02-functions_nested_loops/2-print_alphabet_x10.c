#include "main.h"

/**
 * print_alphabet_x10 -  Prints the alphabet in lowercase, 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i, letter;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

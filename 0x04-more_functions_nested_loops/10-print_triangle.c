#include "main.h"

/**
 * print_triangle - Prints a triangle in the terminal using the character '#'.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Print spaces to right-align the triangle */
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}

		/* Print the '#' characters to form the triangle */
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

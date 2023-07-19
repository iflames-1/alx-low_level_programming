#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			/* Print comma and space before each number, except the first */
			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* Print the product as a two-digit number */
			if (product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		/* Move to the next row */
		_putchar('\n');
	}
}

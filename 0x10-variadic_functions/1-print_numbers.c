#include "variadic_functions.h"

/**
 *print_numbers - prints numbers with seprator
 *@separator: pointer to separator
 *@n: number of numbers to print :D
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

#include "variadic_functions.h"

/**
 *print_strings -  prints strings
 *@separator: pointer to separtor
 *@n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!(printf("%s", va_arg(args, char *))))
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

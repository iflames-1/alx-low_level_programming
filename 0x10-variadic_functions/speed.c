#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, format);

	while (format)
	{

	}

		va_end(args);
	printf("\n");
}
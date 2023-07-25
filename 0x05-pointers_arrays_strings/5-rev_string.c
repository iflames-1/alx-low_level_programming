#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	char k; /* for storing the initial value before switching */

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (i = 0; i < j / 2; i++)
	{
		k = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = k;
	}
}

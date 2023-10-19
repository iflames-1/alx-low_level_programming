#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @s: string to be counted
 * Return: lenth
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

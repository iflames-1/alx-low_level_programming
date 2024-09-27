#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: string to be counted
 * Return: lenth
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (j);
}

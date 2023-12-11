#include "main.h"

/**
 * _strncat - conctenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i, j;
	for (j = 0; dest[j] != '\0'; j++)
	{
		len++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}

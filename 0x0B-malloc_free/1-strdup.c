#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The input string.
 *
 * Return: Pointer to the duplicated string,
 * or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length])
		length++;

	/* Allocate memory for duplicate string */
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

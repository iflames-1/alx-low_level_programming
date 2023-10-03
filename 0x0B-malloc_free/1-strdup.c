#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - duplicates a pointer to a newly allocated space
 * @str: string to duplicate
 *Return: NULL if str = NULL,
 *pointer to the duplicated string
 *NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *nstr;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	nstr = malloc(sizeof(char) * len);
	if (nstr == NULL)
	{
		return (NULL);
	}
	strcpy(nstr, str);

	return (nstr);
}

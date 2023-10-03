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
	int len, i = 0;

	len = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	nstr = malloc(sizeof(char) * len);
	if (nstr == NULL)
	{
		return (NULL);
	}
	while (len > 0)
	{
		nstr[i] = str[i];
		i++;
		len--;
	}
	return (nstr);
}

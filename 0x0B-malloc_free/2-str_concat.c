#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concantenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len, len1, len2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}

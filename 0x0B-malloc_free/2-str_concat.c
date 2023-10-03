#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	int len, len1, len2;
	char *s;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return ("");
	}
	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}

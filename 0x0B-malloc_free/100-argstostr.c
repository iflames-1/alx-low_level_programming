#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			len++;
			total_len++;
		}
		total_len++; /* for the new line character */
	}

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	/* Copy the arguments to the concatenated string */
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[total_len] = av[i][len];
			len++;
			total_len++;
		}
		str[total_len] = '\n';
		total_len++;
	}
	str[total_len] = '\0';

	return (str);
}
